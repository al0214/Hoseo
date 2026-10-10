from tkinter import *
import random
window = Tk()

def roll():
    label['text'] = f'{random.randint(1, 6)}'

label = Label(window, text="")
button = Button(window, text="roll", command=roll)

label.pack()
button.pack()

window.mainloop()

