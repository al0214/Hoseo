from fastapi import APIRouter, Path, HTTPException, status, Request, Depends
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates

info_router = APIRouter(
    tags=["info"]
)

todo_list = []


templates = Jinja2Templates(directory="./templates/")


@info_router.get("/", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("information.html", {
        "request": request
    })
