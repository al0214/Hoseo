from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates

main_router = APIRouter(
    tags=["input"]
)

todo_list = []


templates = Jinja2Templates(directory="./templates/")


@main_router.get("/", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("index.html", {
        "request": request
    })
