/*You are given the firstname and lastname of a person on two different lines.
 Your task is to read them and print */

def print_full_name(a, b):
   print (("Hello %s %s! You just delved into python.") % (first_name, last_name))

if __name__ == '__main__':
    first_name = raw_input()
    last_name = raw_input()
    print_full_name(first_name, last_name)
