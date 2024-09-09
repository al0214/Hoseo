import turtle


t = turtle.Turtle()
t.shape("turtle")


def turtle_quad_draw(weight):
    for i in range(0, 4):
        t.forward(weight)
        t.left(90)
    turtle.done()


def turtle_tri_draw(weight):
    for i in range(0, 3):
        t.forward(weight)
        t.left(120)
    turtle.done()


cho = int(input("삼각형(1) 사각형(2) 어떤걸 그릴까요? "))

if (cho == 2):
    a = float(input("사각형의 크기는 얼마로 할까요? "))
    turtle_quad_draw(a)
else:
    a = float(input("삼각형의 크기는 얼마로 할까요? "))
    turtle_tri_draw(a)
