#Day1 challenge from LCO
#  
def table(a):
    for i in range(1,11):
        print(a,'x',i,'=',a*i)

if __name__ == "__main__":
    a = int(input())
    result = table(a)
