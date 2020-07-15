/*Activity 1:
Find the number of ways that a given integer,X, can be expressed as the sum of the n th powers of unique, natural numbers.
Input Format
The first line contains an integer X . 
The second line contains an integer N .
Constraints
X={ 1 to 1000}
N={ 2 to 10}

Output Format
Output a single integer, the number of possible combinations caclulated.*/

#include<bits/stdc++.h> 
using namespace std;  
int power(int num, unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    else if (n%2 == 0) 
        return power(num, n/2)*power(num, n/2); 
    else
        return num*power(num, n/2)*power(num, n/2); 
} 
int checkRecursive(int x, int n, int curr_num = 1, 
                   int curr_sum = 0) 
{ 
    int results = 0; 
  
  
    int p = power(curr_num, n); 
    while (p + curr_sum < x) 
    { 
        // Recursively check all greater values of i 
        results += checkRecursive(x, n, curr_num+1, 
                                        p+curr_sum); 
        curr_num++; 
        p = power(curr_num, n); 
    } 
    if (p + curr_sum == x) 
        results++; 
    return results; 
} 
int main() 
{ 
    int x = 10, n = 2; 
    cout << checkRecursive(x, n); 
    return 0; 
} 
