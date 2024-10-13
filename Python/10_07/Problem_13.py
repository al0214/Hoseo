import turtle
import random


class Myturtle(turtle.Turtle):
    def draw_square(self, x, y, c):
        t.fillcolor(c)
        t.goto(x, y)
        t.pendown()
        t.begin_fill()
        for _ in range(4):
            t.forward(100)
            t.right(90)
        t.end_fill()
        t.penup()


t = Myturtle()
t.shape("turtle")
t.penup()

for c in ["yellow", "red", "purple", "blue"]:
    x = random.randint(-350, 350)
    y = random.randint(-350, 350)
    t.draw_square(x, y, c)


turtle.done()
