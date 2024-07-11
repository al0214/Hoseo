from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates

info_router = APIRouter(
    tags=["info"]
)

todo_list = []


templates = Jinja2Templates(directory="./templates/")


@info_router.get("/01", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("info01.html", {
        "request": request
    })


@info_router.get("/02", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("info02.html", {
        "request": request
    })
