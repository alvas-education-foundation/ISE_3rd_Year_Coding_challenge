1. Write a program to print all Subsequences of String which Start with Vowel and End with Consonant
Given a string return all possible subsequences which start with vowel and end with a consonant. A String is a subsequence of a given String, that is generated by deleting some character of a given string without changing its order.
Examples:
Input : ‘abc’
Output : ab, ac, abc
Input : ‘aab’
Output : ab, aab

Program:

#include <bits/stdc++.h> 
using namespace std; 
set<string> st; 
bool isVowel(char c) 
{ 
	return (c == 'a' or c == 'e' or 
			c == 'i' or c == 'o' or 
			c == 'u'); 
} 
bool isConsonant(char c) 
{ 
	return !isVowel(c); 
} 

void subsequence(string str) 
{ 
	for (int i = 0; i < str.length(); i++) 
	{ 
		if (isVowel(str[i])) 
		{ 
			for (int j = str.length() - 1; j >= i; j--) 
			{ 
				if (isConsonant(str[j])) 
				{ 
					string str_sub = str.substr(i, j + 1); 
					st.insert(str_sub); 
					for (int k = 1; k < str_sub.length() - 1; k++) 
					{ 
						string sb = str_sub; 
						sb.erase(sb.begin() + k); 
						subsequence(sb); 
					} 
				} 
			} 
		} 
	} 
} 
int main() 
{ 
	string s = "xabcef"; 
	subsequence(s); 

	for (auto i : st) 
		cout << i << " "; 
	cout << endl; 

	return 0; 
} 