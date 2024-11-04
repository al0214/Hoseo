from tkinter import *
import random
window = Tk()

def Frontroll():
    label['text'] = int(label['text']) + 1

def Backroll():
    label['text'] = int(label['text']) - 1

button1 = Button(window, text="-", command=Backroll)
label = Label(window, text="0")
button2 = Button(window, text="+", command=Frontroll)

button1.pack(side=LEFT)
label.pack(side=LEFT)
button2.pack(side=LEFT)

window.mainloop()

