import tkinter as tk
import random

WIDTH = 300
HEIGHT = 300
SPEED_X = 3
SPEED_Y = 3

root = tk.Tk()

# Canvas 생성
canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT)
canvas.pack()

BALL_RADIUS = 5
balls = []

# 공을 생성하는 함수
def create_ball(x, y):
    dx = SPEED_X * (1 if random.choice([True, False]) else -1)
    dy = SPEED_Y * (1 if random.choice([True, False]) else -1)

    # 공의 좌표를 올바르게 설정
    ball = {'cords': canvas.create_oval(x - BALL_RADIUS, y - BALL_RADIUS, x + BALL_RADIUS, y + BALL_RADIUS, fill='red', outline='red'),
            'x': x, 'y': y, 'dx': dx, 'dy': dy}
    balls.append(ball)

    # ball_move_delta에 공의 ID와 속도 초기화
    ball_move_delta[ball['cords']] = [dx, dy]

# 마우스 클릭 시 새로운 공을 생성하는 이벤트
def on_click(event):
    create_ball(event.x, event.y)

# 공들의 이동을 추적하는 딕셔너리
ball_move_delta = {}

# 공을 이동시키는 함수
def move_ball():
    for ball in balls:
        ball_id = ball['cords']
        delta = ball_move_delta[ball_id]  # 이동값 (dx, dy)

        # 공의 현재 좌표를 확인
        coords = canvas.coords(ball_id)
        x1, y1, x2, y2 = coords
        x_center = (x1 + x2) / 2
        y_center = (y1 + y2) / 2

        # 공의 이동을 갱신
        new_x = x_center + delta[0]
        new_y = y_center + delta[1]

        # 벽에 부딪히면 반사
        if new_x - BALL_RADIUS <= 0 or new_x + BALL_RADIUS >= WIDTH:
            delta[0] = -delta[0]  # x 방향 반사
        if new_y - BALL_RADIUS <= 0 or new_y + BALL_RADIUS >= HEIGHT:
            delta[1] = -delta[1]  # y 방향 반사

        # 이동 값 갱신
        ball_move_delta[ball_id] = [delta[0], delta[1]]

        # 공을 새로운 위치로 이동
        canvas.move(ball_id, delta[0], delta[1])

    root.after(100, move_ball)  # 100ms 후에 계속 호출

# 마우스 클릭 시 새로운 공을 생성하는 이벤트
canvas.bind("<Button-1>", on_click)

# 첫 번째 move_ball 호출, 이후 100ms마다 계속 호출
root.after(100, move_ball)

root.mainloop()
