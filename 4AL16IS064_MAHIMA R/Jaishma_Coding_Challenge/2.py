import sys
if __name__ == '__main__':
    a = int(input().strip())
    if a % 2 == 0:
        if 2 <= a <= 5:
            print("Not Weird")
        if 6 <= a <= 20:
            print("Weird")
        if a > 20:
            print("Not Weird")    
    else:
        print("Weird") 