3.A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {},and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given n strings of brackets, determine whether each sequence of 
brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.


INPUT:

The first line contains a single integer n, the number of strings. 

Each of the next n lines contains a single string s, a sequence of brackets.

CONSTRAINTS:

1<=n<=10^3
1<=|s|<=10^3, where  is the length of the sequence.
All chracters in the sequences ? { {, }, (, ), [, ] }.

OUTPUT:

For each string, return YES or NO.
 

SAMPLE INPUT 
3
{[()]}
{[(])}
{{[[(())]]}}
SAMPLE OUTPUT 
YES
NO
YES

#include <stack>

#include <string>

#include <iostream>

using namespace std;

 

string isBalanced(string s) {

stack<char> tempStack;

int j=0;

 

while(s[j]!='\0'){

switch (s[j]) {

case '{':

case '(':

case '[':

tempStack.push(s[j]);

break;

case '}':

if ( tempStack.empty() || tempStack.top() != '{' ) {

return "NO";

}

tempStack.pop();

break;

case ')':

if ( tempStack.empty() || tempStack.top() != '(' ) {

return "NO";

}

tempStack.pop();

break;

case ']':

if ( tempStack.empty() || tempStack.top()!='[' ) {

return "NO";

}

tempStack.pop();

break;

}

j++;

}

 

return tempStack.empty() ? "YES" : "NO";

}



 

int main(){

int t;

cin >> t;

for(int i = 0; i < t; i++){

string s;

cin >> s;

cout << isBalanced(s) << endl;

}

return 0;

}