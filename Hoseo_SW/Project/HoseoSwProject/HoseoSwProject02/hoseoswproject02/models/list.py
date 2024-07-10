from pydantic import BaseModel
from typing import List, Optional


class apiVal(BaseModel):
    apiValue: str

    class Config:
        json_schema_extra = {
            "example": {
                "apiValue": "양파"
            }
        }

    class Settings:
        name = "API Value"
