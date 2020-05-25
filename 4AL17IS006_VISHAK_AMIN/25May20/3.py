# In this challenge, the user enters a string and a substring. You have to print the number of times that the substring occurs in the given string. String traversal will take place from left to right, not from right to left.




def count_substring(string, sub_string):
    n =0
    sb= len (sub_string)
    for i in range (0, len(string)):
        if string[i:i+sb] == sub_string:
            n = n+1

    return n

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)