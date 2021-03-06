/*Activity 3:
Given a time in 12 -hour AM/PM format, convert it to Railway's (24-hour) time.

Input Format
A single string s containing a time in -12 hour clock format(HH:mm:ss:am/pm)

Constraints
All input times are valid

Output Format
Convert and print the given time in -24 hour format.*/

#include<iostream> 
using namespace std; 
  
void print24(string str) 
{ 
  
    int h1 = (int)str[1] - '0'; 
    int h2 = (int)str[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10); 
  
    if (str[8] == 'A') 
    { 
        if (hh == 12) 
        { 
            cout << "00"; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
        else
        { 
            for (int i=0; i <= 7; i++) 
                cout << str[i]; 
        } 
    } 
  
    else
    { 
        if (hh == 12) 
        { 
            cout << "12"; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
        else
        { 
            hh = hh + 12; 
            cout << hh; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
    } 
} 
int main() 
{ 
   string str = "07:05:45PM"; 
   print24(str); 
   return 0; 
} 
