from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from models.list import apiVal
from fastapi.templating import Jinja2Templates
import requests
import pandas as pd
import re

list_router = APIRouter(
    tags=["list"]
)

templates = Jinja2Templates(directory="./templates/")

l = []


@list_router.get("/", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("list.html", {
        "request": request,
        "data": l[0]['COOKRCP01'][1]
    })

apiData = []


@list_router.post("/data")
async def get_api_para(id: apiVal):
    l.clear()
    base_url = 'http://openapi.foodsafetykorea.go.kr/api/apiInsert/COOKRCP01/json/1/5/RCP_NM = ""'
    n = id.apiValue.split(",")
    url = base_url + ''.join(
        [f'&RCP_PARTS_DTLS="{ingredient.strip()}"' for ingredient in n])

    response = requests.get(url)
    with open("./recipe.json", 'wb') as f:
        f.write(response.content)
    j = pd.read_json("./recipe.json")
    l.append(j)
    if j['COOKRCP01'][1] != '{"MSG": "해당하는 데이터가 없습니다.", "CODE": "INFO-200"}':
        return {"status_code": 200}
    else:
        return {"status_code": 404}

dataDict = []


@list_router.get("/data/{id}", response_class=HTMLResponse)
async def get_end_page(request: Request, id: int):

    dataDict.clear()

    data = l[0]['COOKRCP01'][1][id-1]
    k = {key: value for key, value in data.items() if re.match(r'^MANUAL\d+$', key)}
    o = dict(sorted(k.items()))

    for i in o:
        if (o[i] != ""):
            dataDict.append(o[i])
    return templates.TemplateResponse("recipe.html", {
        "request": request,
        "dataDict": dataDict,
        "data":  data
    })
