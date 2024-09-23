import turtle
import math


t = turtle.Turtle()
t.shape("turtle")
t.penup()
t.goto(-400, 0)

t.pendown()
for i in range(360):
    radian = math.pi * i / 180.0
    y = math.sin(radian) * 100

    t.goto(i-400, y)
turtle.done()
