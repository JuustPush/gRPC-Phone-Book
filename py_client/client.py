from __future__ import print_function

from tkinter import *
from tkinter import messagebox
from tkinter import ttk

import logging


import grpc
import work_pb2
import work_pb2_grpc

phonelist = []
def list_users(stub):
    GetUserRequest = work_pb2.GetUserRequest()
    

    users = stub.GetUser(GetUserRequest)
    for user in users:
        phonelist.append(user)
    set_select()

def toAdd(stub):
    GetUserRequest = work_pb2.User(name = E_name_var.get(), midName = E_mid_name_var.get(), lastName = E_last_name_var.get(), phone = E_contact_var.get(),Note = E_note_var.get())
    
    res = stub.addUser(GetUserRequest)
    
    if res.message:
        messagebox.showerror("error","the number has already been registered or none information")
    else:
        messagebox.showinfo("Success","Confermation, Information add")


def AddDetail():
    with grpc.insecure_channel("127.0.0.1:5000") as channel:
        stub = work_pb2_grpc.WorkStub(channel)
        print("-------------- Add --------------")
        toAdd(stub)
        phonelist.clear()
        list_users(stub)


def EntryReset():
    E_name_var.set('')
    E_mid_name_var.set('')
    E_last_name_var.set('')
    E_contact_var.set('')
    E_note_var.set('')

def deleteServ(stub,DeleteUser):
    GetUserRequest = work_pb2.User(name = DeleteUser.name, midName = DeleteUser.midName, lastName = DeleteUser.lastName, phone = DeleteUser.phone,Note = DeleteUser.Note)

    res = stub.deleteUser(GetUserRequest)

    if res.message:
        messagebox.showerror("error","the number not deleted")
    else:
        messagebox.showinfo("Success","the number has been deleted")
         

def WhichSelected():
	if len(select.curselection())==0:
		messagebox.showerror("Error", "Please Select the Name")
	else:
		return int(select.curselection()[0])

def DeleteEntry():
	if len(select.curselection())!=0:
		if WhichSelected()==0:
			messagebox.showerror("Error", 'Not use first row')
			return
		result=messagebox.askyesno('Confirmation','You Want to Delete Contact\n Which you selected')
		if result==True:
			DeleteUser = phonelist[WhichSelected()-1]
			with grpc.insecure_channel("127.0.0.1:5000") as channel:
				stub = work_pb2_grpc.WorkStub(channel)
				print("-------------- Del --------------")
				deleteServ(stub,DeleteUser)
				phonelist.clear()
				list_users(stub)
	else:
		messagebox.showerror("Error", 'Please select the Contact')



def FindInfo():
	print(cb.get())
	if (cb.get()=='' or E_search_var.get() ==''):
		with grpc.insecure_channel("127.0.0.1:5000") as channel:
			stub = work_pb2_grpc.WorkStub(channel)
			print("-------------- List --------------")
			phonelist.clear()
			list_users(stub)
			return    
	if cb.get()=='name':
		GetUserRequest = work_pb2.User(name = E_search_var.get())
	if cb.get()=='mid name':
		GetUserRequest = work_pb2.User(midName = E_search_var.get())
	if cb.get()=='last name':
		GetUserRequest = work_pb2.User(lastName = E_search_var.get())
	if cb.get()=='phone':
		GetUserRequest = work_pb2.User(phone = E_search_var.get())
	if cb.get()=='note':
		GetUserRequest = work_pb2.User(Note = E_search_var.get())
	with grpc.insecure_channel("127.0.0.1:5000") as channel:
		stub = work_pb2_grpc.WorkStub(channel)
		print("-------------- Find --------------")
		phonelist.clear()
		users = stub.findUser(GetUserRequest)
		users = stub.findUser(GetUserRequest)
		for user in users:
		    phonelist.append(user)
		set_select()    

def checkInfo():
	if WhichSelected()==0:
			messagebox.showerror("Error", 'Not use first row')
			return
	print('check')
	name = phonelist[WhichSelected()-1]
	E_name_var.set(name.name)
	E_mid_name_var.set(name.midName)
	E_last_name_var.set(name.lastName)
	E_contact_var.set(name.phone)
	E_note_var.set(name.Note[:-2])
	
	
def run():
    with grpc.insecure_channel("127.0.0.1:5000") as channel:
        stub = work_pb2_grpc.WorkStub(channel)
        print("-------------- UserFeatures --------------")
        list_users(stub)

def set_select():
    #phonelist.sort(key=lambda record: record[1])
    select.delete(0, END)
    
    i=0
    select.insert(END, "num  |  firstName   |   midName  |    lastName   |     phone   |   Note   |")
    for user in phonelist:
        i += 1
        select.insert(END, f"{i}  |    {user.name}   |   {user.midName}  |    {user.lastName}   |     {user.phone}   |   {user.Note[:-2]}   |")
        



window = Tk()
window.title("Phone List Application")
Frame1 = LabelFrame(window,text="Enter the Contact Detail for add")
Frame1.grid(padx=5,pady=5)


Inside_Frame1 = Frame(Frame1)
Inside_Frame1.grid(row=0,column=0,padx=15,pady=15)
#---------------------------------------------
l_name = Label(Inside_Frame1,text="Name")
l_name.grid(row=0,column=0,padx=5,pady=5)
E_name_var = StringVar()

E_name = Entry(Inside_Frame1,width=30, textvariable=E_name_var)
E_name.grid(row=0,column=1,padx=5,pady=5)
#---------------------------------------------
l_mid_name = Label(Inside_Frame1,text="MidName")
l_mid_name.grid(row=1,column=0,padx=5,pady=5)
E_mid_name_var = StringVar()

E_mid_name = Entry(Inside_Frame1,width=30, textvariable=E_mid_name_var)
E_mid_name.grid(row=1,column=1,padx=5,pady=5)
#-----------------------------------------------
l_last_name= Label(Inside_Frame1,text="LastName")
l_last_name.grid(row=2,column=0,padx=5,pady=5)
E_last_name_var= StringVar()
E_last_name = Entry(Inside_Frame1,width=30,textvariable=E_last_name_var)
E_last_name.grid(row=2,column=1,padx=5,pady=5)
#---------------------------------------------------
l_contact= Label(Inside_Frame1,text="phone")
l_contact.grid(row=3,column=0,padx=5,pady=5)
E_contact_var = StringVar()
E_contact = Entry(Inside_Frame1,width=30,textvariable=E_contact_var)
E_contact.grid(row=3,column=1,padx=5,pady=5)
#---------------------------------------------------
l_note= Label(Inside_Frame1,text="Note")
l_note.grid(row=4,column=0,padx=5,pady=5)
E_note_var = StringVar()
E_note = Entry(Inside_Frame1,width=30,textvariable=E_note_var)
E_note.grid(row=4,column=1,padx=5,pady=5)
#---------------------------------------------------
Frame2 = Frame(window)
Frame2.grid(row=0,column=1,padx=15,pady=15,sticky=E)
#<><><><><><><><><><><><><><<><<<><><<<><><><><><><><><><>
Add_button = Button(Frame2,text="Add Detail",width=15,bg="#6B69D6",fg="#FFFFFF",command=AddDetail)
Add_button.grid(row=0,column=0,padx=8,pady=8)

Reset_button = Button(Frame2,text="Reset",width=15,bg="#6B69D6",fg="#FFFFFF",command=EntryReset)
Reset_button.grid(row=2,column=0,padx=8,pady=8)
#----------------------------------------------------------------------------

DisplayFrame = Frame(window)
DisplayFrame.grid(row=1,column=0,padx=15,pady=15)

scroll = Scrollbar(DisplayFrame, orient=VERTICAL)
select = Listbox(DisplayFrame, yscrollcommand=scroll.set,font=("Arial Bold",10),bg="#282923",fg="#E7C855",width=60,height=10,borderwidth=3,relief="groove")
scroll.config(command=select.yview)
select.grid(row=0,column=0,sticky=W)
scroll.grid(row=0,column=1,sticky=N+S)

#-----------------------------------------------------------------------------------
ActionFrame = Frame(window)
ActionFrame.grid(row=1,column=1,padx=15,pady=15,sticky=E)

Delete_button = Button(ActionFrame,text="Delete",width=15,bg="#D20000",fg="#FFFFFF",command=DeleteEntry)
Delete_button.grid(row=0,column=0,padx=5,pady=5,sticky=S)

#-----------------------------------------------------------------------------------
Frame_s = LabelFrame(window,text="Enter the Contact Detail for search")
Frame_s.grid(padx=5,pady=5)

Inside_Frame_s = Frame(Frame_s)
Inside_Frame_s.grid(row=3,column=3,padx=15,pady=15)

#---------------------------------------------
l_search = Label(Inside_Frame_s,text="Info")
l_search.grid(row=0,column=0,padx=5,pady=5)
E_search_var = StringVar()

E_search_var = Entry(Inside_Frame_s,width=30, textvariable=E_search_var)
E_search_var.grid(row=0,column=1,padx=5,pady=5)
#---------------------------------------------

ActionFrameSearch = Frame(window)
ActionFrameSearch.grid(row=2,column=1,padx=15,pady=15,sticky=E)
cb = ttk.Combobox(ActionFrameSearch,values=("name","mid name","last name","phone","note"))
cb.pack()

Find_button = Button(ActionFrame,text="Find",width=15,bg="#6B69D6",fg="#FFFFFF",command=FindInfo)
Find_button.grid(row=1,column=0,padx=8,pady=8)

Check_button = Button(ActionFrame,text="Check",width=15,bg="#6B69D6",fg="#FFFFFF",command=checkInfo)
Check_button.grid(row=2,column=0,padx=8,pady=8)
# l_search = Label(ActionFrameSearch,text="Search")
# l_search.grid(row=0,column=0,padx=5,pady=5)
# E_search_var = StringVar()

# E_search_var = Entry(ActionFrameSearch,width=30, textvariable=E_search_var)
# E_search_var.grid(row=0,column=1,padx=5,pady=5)

if __name__ == "__main__":
    logging.basicConfig()
    run()


window.mainloop()