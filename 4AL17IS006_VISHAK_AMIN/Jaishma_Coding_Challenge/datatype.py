"if u r copying the program please change the variables name ;)"

n = int(input())

for i in range(0,n):
    ele =int(input())
    print(ele, "can be fitted in: ")
    if ele >= -128 and ele <=127:
        print("* byte")
    if ele>=-pow(2, 15) and ele <= pow(2,15)-1:
        print("* short")
    if ele>=-pow(2, 31) and ele <= pow(2,31)-1:
        print("* int")
    if ele>=-pow(2, 63) and ele <= pow(2,63)-1:
        print("* long")
    else:
        print("Cannot be fitted anywhere")
