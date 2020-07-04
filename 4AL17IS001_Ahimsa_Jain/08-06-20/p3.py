3.Some people remain old fashioned and John is one of them. He doesn't like the new smart phones with full keypads and still uses the old keypads which require you to tap a key multiple times to type a single letter. For example, if the keyboard has two keys, one with the letters "adef" and the other one with the letters "zyx", then typing 'a' requires one keystroke, typing 'f' requires four keystrokes, typing 'y' requires two keystrokes, and so on.

He recently moved to a new country where the language is such that his keypad is not the most efficient. In every language some characters occur more often than others. He wants to create a specific keyboard for this language that uses N different letters. He has a large body of text in this language, and has already analyzed it to find the frequencies of all N letters of its alphabet.

You are given an array 'frequencies' with N elements. Each element of frequencies is the number of times one of the letters in the new language appears in the text John has. Each element of frequencies will be strictly positive. (I.e., each of the N letters occurs at least once.)

You are also given an array keySize. The number of elements of keySize is the number of keys on the keyboard. Each element of keySize gives the maximal number of letters that maybe put on one of the keys.

Find an assignment of letters to keys that minimizes the number of keystrokes needed to type the entire text. Output that minimum number of keystrokes. If there is not enough room on the keys and some letters of the alphabet won't fit, Output -1 instead.

Input Format

The first line will contain a number 'N' that specifies the size of 'frequencies' array
The second line will contain N numbers that form the frequencies array
The third line contains a number 'K' that specifies the size of the 'keySize' array
The fourth line contains K numbers that form the keySize array
Output Format

Output a single integer that is answer to the problem.
Constraints

frequencies will contain between 1 and 50 elements, inclusive.
Each element of frequencies will be between 1 and 1,000, inclusive.
keySizes will contain between 1 and 50 elements, inclusive.
Each element of keySizes will be between 1 and 50, inclusive.
SAMPLE INPUT 
4
7 3 4 1
2
2 2
SAMPLE OUTPUT 
19

n=int(input())

fr=list(map(int,input().split()))

k=int(input())

keys=list(map(int,input().split()))

if n>sum(keys) : print(-1)

else :

fr=sorted(fr,reverse=True)

keys=sorted(keys,reverse=True)

total=0

i=0

r=1

while i<n:

for j in range(k):

if(i>=n) : break

if keys[j]==0 : break

total+=fr[i]*r

i+=1

keys[j]-=1

r+=1

print(total)