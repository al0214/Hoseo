import tkinter as tk
import random

WIDTH = 1200
HEIGHT = 600
BALL_RADIUS = 20



root= tk.Tk()

x1=WIDTH //2
y1= HEIGHT //2

canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT)
canvas.pack()
                   

ball= canvas.create_oval(x1, y1, x1 + BALL_RADIUS, y1 + BALL_RADIUS,
                                   fill = "red", outline = "red")
##ball= canvas.create_oval(x1, y1, x1 + BALL_RADIUS, y1 + BALL_RADIUS,
##                                   fill = "blue", outline = "blue")
##
##ball_move_delta = {ball:[10, 10],
##                           ball2:[5,15]}


def move_ball():
     x1,y1,x2,y2 = (canvas.coords(ball))
     print(x1,y1,x2,y2)
     canvas.move(ball,10,0)
     root.after(100, func=move_ball)


root.after(100, func=move_ball)

root.mainloop()
