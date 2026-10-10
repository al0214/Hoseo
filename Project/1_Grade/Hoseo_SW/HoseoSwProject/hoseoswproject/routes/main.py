from fastapi import APIRouter, Path, HTTPException, status, Request, Depends, File, UploadFile
from fastapi.responses import HTMLResponse
from fastapi.templating import Jinja2Templates

main_router = APIRouter(
    tags=["main"]
)

todo_list = []


templates = Jinja2Templates(directory="./templates/")


@main_router.get("/", response_class=HTMLResponse)
async def retrieve_main(request: Request):
    return templates.TemplateResponse("index.html", {
        "request": request
    })


@main_router.post("/file/")
async def create_file(file: bytes = File()):
    return {"file_size": len(file)}


@main_router.post("/uploadfile/")
async def create_upload_file(file: UploadFile):
    return {"filename": file.filename}
