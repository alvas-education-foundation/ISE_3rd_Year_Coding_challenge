#Day 9 Challenge from LCO 
# To find the total cost of refund and rebate .
def calc(s,c,b):
    s = s * 3
    c = c * 1
    b = b * 2

    b = b/2
    c = c-10

    print("total Cost is",s+b+c)


sweater = 68
comp = 75
brace = 43
calc(sweater,comp,brace)