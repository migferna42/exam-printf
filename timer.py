# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    exam_printf.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 21:24:29 by lmartin           #+#    #+#              #
#    Updated: 2019/10/30 04:47:08 by mle-floc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from Tkinter import *
import time
import sys
import subprocess
import os

class Countdown:

    def __init__(self, master):
        frame = Frame(master)
        frame.pack()
	frame.configure(background='black')



        self.running = True
        self.time1 = ''
        self.prevSec = ''
        self.mins = 0
        self.secs = 0
        self.hours = 2

        self.clock = Label(frame, width=7, bg='black', fg='white', font=('Futura', 40, ))
        self.clock.grid(row=1, columnspan=100, padx=0, pady=(10))
        self.tick()

    def tick(self):
        if self.running == True:
            self.newSec = time.strftime('%H:%M:%S')
        else:
            self.newSec = ''
            self.prevSec = ''
        if self.newSec != self.prevSec:
            self.prevSec = self.newSec
            self.secs = self.secs - 1
            if self.secs < 0:
                self.secs = 59
                self.mins = self.mins - 1
                if self.mins < 0:
                    self.mins = 59
                    self.hours = self.hours - 1
                    if self.hours < 0:
                        self.hours = 0
                        self.mins = 0
                        self.secs = 0
        self.time2 = ('%02d:%02d:%02d' % (self.hours, self.mins, self.secs))
        if self.time2 != self.time1:
            self.time1 = self.time2
            self.clock.config(text=self.time2)
        self.clock.after(200, self.tick)

def end():
	bashCommand = 'printf "\e[31m[TIMEOUT 0]\e[0m"'
	process = subprocess.Popen(bashCommand, stdout=subprocess.PIPE, shell=True)
	output, error = process.communicate()
	print(output)
	bashCommand = "kill " + sys.argv[1] + " >/dev/null 2>&1"
	process = subprocess.Popen(bashCommand, stdout=subprocess.PIPE, shell=True)
	root.destroy()
username = os.environ["USER"]
root = Tk()
root.title("Exam - " + username)
c = Countdown(root)
root.geometry("200x80")
root.configure(background='black')
root.attributes("-topmost", 1)
root.resizable(0, 0)
root.after(7200000,end)
root.mainloop()
