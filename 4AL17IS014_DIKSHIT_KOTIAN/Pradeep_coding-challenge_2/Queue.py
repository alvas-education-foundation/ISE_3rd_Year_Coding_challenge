l=[]
def enque():
    n=int(input())
    l.append(n)
def deque():
    if(len(l)==0):
        print("Queue is empty")
    else:
        l.pop(0)
def display():
    print(l)
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