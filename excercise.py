from tkinter import *
top=Tk()

e=Entry(top,width=50,borderwidth=5)
e.pack()
e.insert(0,"Enter your name:")
def myClick():
    myLabel=Label(top,text="Hello! "+e.get(),fg="#234567")
    myLabel.pack()

myButton=Button(top,text="Click Me!",command=myClick,fg="#fedcba",bg="#012345")
myButton.pack()
top.mainloop()
