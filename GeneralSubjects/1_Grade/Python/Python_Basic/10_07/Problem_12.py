import turtle

t = turtle.Turtle()
t.shape("arrow")

aList = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120]


t.goto(0, 0)
t.seth(0)
t.speed(2)
t.right(45)

for i in range(0, len(aList)):
    t.pendown()
    t.forward(aList[i])
    t.penup()
    t.backward(aList[i])
    t.right(25)

turtle.done()
