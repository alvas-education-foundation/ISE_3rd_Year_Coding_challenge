def Shuffle(str1, str2, str3):
    s1 = len(str1) - 1
    s2 = len(str2) - 1
    s3 = len(str3)- 1

    while (s3 >= 0):
        if(str3[s3] == str2[s2]):
            s2=s2-1
        elif (str3[s3] == str1[s1]):
            s1=s1-1
        else:
            return 0
        s3=s3-1
    
    return 1

str1=input()
str2=input()
str3=input()
r=Shuffle(str1,str2,str3)
if(r==1):
    print("Valid shuffle")
else:
    print("Invalid shuffle")