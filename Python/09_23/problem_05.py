import turtle
import random
import math

t = turtle.Turtle()
t.shape("turtle")


for i in range(0, 10):
    t.penup()
    t.goto(random.randint(-400, 401), random.randint(-300, 301))
    t.pendown()

    t.circle(random.randint(0, 100))


turtle.done()
