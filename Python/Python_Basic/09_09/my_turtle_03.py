import turtle
import math
t = turtle.Turtle()
t.shape("turtle")

s = turtle.textinput(",", "도형을 입력하세요")

if s == "사각형":
    w = int(turtle.textinput("", "가로 : "))
    h = int(turtle.textinput("", "세로 : "))

    for _ in range(0, 2):
        t.forward(w)
        t.left(90)
        t.forward(h)
        t.left(90)

    turtle.done()

if s == "삼각형":
    w = int(turtle.textinput("", "가로 : "))
    h = int(turtle.textinput("", "세로 : "))

    h = math.sqrt((w/2 ** 2)+(h**2))

    t.forward(w)
    t.left(120)
    t.forward(h)
    t.left(120)
    t.forward(h)
    t.left(120)

    turtle.done()
