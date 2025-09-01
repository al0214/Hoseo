import turtle
import random
import math


t = turtle.Turtle()
t.shape("turtle")

t.penup()
t.goto(0, 0)
t.pendown()
t.seth(90)
t.speed(10)
for i in range(0, 46, 2):
    t.forward(i*10)
    t.left(90)

turtle.done()
