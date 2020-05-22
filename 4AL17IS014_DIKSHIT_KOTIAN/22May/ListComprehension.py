/*In this challenge, the user enters a string and a substring. 
You have to print the number of times that the substring occurs in the given string. 
String traversal will take place from left to right, not from right to left.*/

def count_substring(string1, sub_string):
    string, substring = string1,sub_string

    return (sum([ 1 for i in range(len(string)-len(substring)+1) if string[i:i+len(substring)] == substring]))

if __name__ == '__main__':
    string = raw_input().strip()
    sub_string = raw_input().strip()
    
    count = count_substring(string, sub_string)
    print count