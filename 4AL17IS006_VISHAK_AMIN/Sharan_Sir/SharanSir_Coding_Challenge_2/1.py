shuffle = ""
def check(str1,str2,str3):
    shuffle =  str1+str2
    c1 = "".join(sorted(shuffle))
    c2 = "".join(sorted(str3))
    if c1 == c2:
        print("True")
    else:
        print("False")    

        
str1 = input()
str2 = input()
str3 = input()
check(str1,str2,str3)

































































































#@Vishak