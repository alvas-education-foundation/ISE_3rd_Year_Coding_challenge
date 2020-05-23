/*You are given a string. Split the string on a " " (space) delimiter and join using a - hyphen.*/

def split_and_join(line):
    # write your code here
    x=line.split(" ") 
    x='-'.join(x)    
    return x
if __name__ == '__main__':
    line = raw_input()
    result = split_and_join(line)
    print result