from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates
import pandas as pd

info_router = APIRouter(
    tags=["info"]
)

todo_list = []


templates = Jinja2Templates(directory="./templates/")


@info_router.get("/", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    n = pd.read_csv("./20240711134316.csv")
    table_html = n.to_html(classes='table table-striped', index=False)
    return templates.TemplateResponse("index.html", {
        "request": request,
        "table_html": table_html
    })
