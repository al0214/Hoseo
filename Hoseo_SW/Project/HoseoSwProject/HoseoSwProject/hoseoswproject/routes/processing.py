
from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates

processing_router = APIRouter(
    tags=["processing"]
)

todo_list = []


templates = Jinja2Templates(directory="./templates/")


@processing_router.get("/", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("processing.html", {
        "request": request
    })
