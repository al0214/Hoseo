from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from models.list import apiVal
from fastapi.templating import Jinja2Templates
import requests
import pandas as pd

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


@list_router.post("/data")
async def get_api_para(id: apiVal):
    n = id.apiValue.strip()
    url = f'http://openapi.foodsafetykorea.go.kr/api/cc1b2a587a5a42d09890/COOKRCP01/json/1/5/RCP_NM=""&RCP_PARTS_DTLS="{n}"'
    response = requests.get(url)
    with open("./recipe.json", 'wb') as f:
        f.write(response.content)
    j = pd.read_json("./recipe.json")
    l.append(j)
    if j['COOKRCP01'][1] == {"MSG": "해당하는 데이터가 없습니다.", "CODE": "INFO-200"}:
        return {"status_code": 404}
    else:
        return {"status_code": 200}
