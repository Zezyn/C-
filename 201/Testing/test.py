import tkinter
import tkinter.messagebox

class TelephoneGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()

        #Create two frames
        self.top_frame = tkinter.Frame(self.main_window)
        self.mid_frame = tkinter.Frame(self.main_window)
        self.bottom_frame = tkinter.Frame(self.main_window)
        
        #Create variable rpm for radio buttons
        self.radio_var = tkinter.IntVar()
        self.radio_var.set(1)

        #Create top_frame radio buttons
        self.rb1 = tkinter.Radiobutton(self.top_frame, text='Daytime (6:00 A.M. \
            through 5:59P.M.)    $0.07', variable=self.radio_var, value=1)
        self.rb2 = tkinter.Radiobutton(self.top_frame, text='Evening (6:00 P.M. \
            through 11:59P.M.)   $0.12', variable=self.radio_var, value=2)
        self.rb3 = tkinter.Radiobutton(self.top_frame, text='Off-Peak (midnight \
            through 5:59 A.M.)   $0.05', variable=self.radio_var, value=3)

        #Pack the buttons
        self.rb1.pack()
        self.rb2.pack()
        self.rb3.pack()

        #Create user input of time for call
        self.prompt_label = tkinter.Label(self.mid_frame, text = 'Enter total time of phone call:')
        self.minute_entry = tkinter.Entry(self.mid_frame, width = 10)

        #Create ok and quit buttons
        self.ok_button = tkinter.Button(self.bottom_frame, text='Calculate', command=self.calculate)
        
        #Pack ok and Quit button
        self.ok_button.pack(side='left')
        
        #Pack Frames
        self.top_frame.pack()
        self.bottom_frame.pack()

        #Start loop
        tkinter.mainloop()

    def calculate(self):
        tkinter.messagebox.showinfo('Selection', 'You selected option ' + str(self.radio_var.get()))

        
telephone_gui = TelephoneGUI()
