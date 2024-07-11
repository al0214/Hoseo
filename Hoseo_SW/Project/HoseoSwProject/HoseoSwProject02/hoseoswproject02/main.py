from fastapi import FastAPI
from fastapi.staticfiles import StaticFiles

from routes.input import main_router
from routes.list import list_router
from routes.info import info_router

import uvicorn

app = FastAPI()

app.include_router(main_router, prefix="/main")
app.include_router(list_router, prefix="/list")
app.include_router(info_router, prefix="/info")


app.mount("/static", StaticFiles(directory="static"), name="static")

if __name__ == "__main__":
    uvicorn.run("main:app", host="127.0.0.1", port=8080, reload=True)
