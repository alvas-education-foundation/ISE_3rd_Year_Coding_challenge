Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

test cases,t
two strings a and b, for each test case
Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

SAMPLE INPUT 
1
cde
abc
SAMPLE OUTPUT 
4

t = int(input())

for i in range(t):

    a = input()

    b = input()

    c = 0

    for i in range(97,123):

        first = a.count(chr(i))

        second = b.count(chr(i))

        c = c+abs(first-second)

    print(c)