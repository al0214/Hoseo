import uvicorn
from fastapi import FastAPI
from fastapi.staticfiles import StaticFiles

from data.routes.info import info_router


app = FastAPI()
app.include_router(info_router, prefix="/info")


if __name__ == "__main__":
    uvicorn.run("main:app", host="127.0.0.1", port=8080, reload=True)
