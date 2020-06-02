
def subString(Str,n):
    st="" 
    for Len in range(1,n + 1):  
        for i in range(n - Len + 1): 
            j = i + Len - 1
            for k in range(i,j + 1): 
                st=st+Str[k]
            l=len(st)-1
            if(l!=0):
                if((st[0]=='a' or st[0]=='e' or st[0]=='i' or st[0]=='o' or st[0]=='u') and (st[l]!='a' or st[l]!='e' or st[l]!='i' or st[l]!='o' or st[l]!='u') ):
                    print(st)
            st=""
            
Str = input()
subString(Str,len(Str))