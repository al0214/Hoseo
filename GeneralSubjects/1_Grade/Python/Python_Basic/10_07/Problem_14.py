import turtle
import random


def moveObj(x) -> int:
    if (x == 1):
        return 5
    elif (x == 2):
        return 10
    elif (x == 3):
        return 15
    elif (x == 4):
        return 20
    elif (x == 5):
        return 25
    elif (x == 6):
        return 30
    else:
        return 0


radius = 35

one = turtle.Turtle()
one.color("red")
one.shape("turtle")
one.penup()

two = turtle.Turtle()
two.color("blue")
two.shape("arrow")
two.penup()

# one 종료지점 원 그리기
one.goto(185, -230)
one.pendown()
one.circle(radius)
one.penup()

# one 게임 시작 지점 이동
one.goto(-200, -200)
one.pendown()

# two 종료지점 원 그리기
two.goto(185, 165)
two.pendown()
two.circle(radius)
two.penup()

# two 게임 시작 지점 이동
two.goto(-200, 200)
two.pendown()

die = [1, 2, 3, 4, 5, 6]

a = True

count = 1


while (a):
    endLine = 200

    print(f'\n게임 {count}차전 시작')
    one_distance = random.choice(die)
    print(f"플레이어 주사위 숫자 {one_distance}")

    one.pendown()
    one.forward(moveObj(one_distance))
    one.penup()

    two_distance = random.choice(die)

    print(f"플레이어 주사위 숫자 {two_distance}")

    two.pendown()
    two.forward(moveObj(two_distance))
    two.penup()

    if (one.xcor() >= 200):
        print("플레이어가 이겼습니다.")
        a = False
    elif (two.xcor() >= 200):
        print("컴퓨터가 이겼습니다.")
        a = False

    count += 1

turtle.done()
