'''  Write a Program To Implement Queue Operations Using Switch Statement. '''

x=[]
def enque():
    n=int(input())
    x.append(n)
def deque():
    if(len(x)==0):
        print("Queue is empty")
    else:
        x.pop(0)
def display():
    print(x)
f=1
while(f!=0):
    choice=int(input())
    switcher={
        1:enque,2:deque,3:display
    }
    f=switcher.get(choice,0)
    if(f==0):
        print("Invalid")
    else:
        f()