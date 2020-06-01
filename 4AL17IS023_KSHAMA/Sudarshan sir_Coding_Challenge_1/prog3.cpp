/*
Question:
3)Given an array,X , of n  integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that ,Q1,Q2,Q3  are integers.

Input Format

•The first line contains an integer,n , denoting the number of elements in the array.
•The second line contains  n space-separated integers describing the array's elements.

Output format:
Print  lines of output in the following order:

1.The first line should be the value of Q1.
2.The second line should be the value of Q2.
3.The third line should be the value of Q3 .

Constraint:
1.n=[5 to 50]
2.xi=[0 to 100]

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int quad(vector<int> a)
{
    int q, n=a.size(); 
    
    if(n%2==0) 
        q = (a[n/2-1] + a[n/2])/2;
    else 
        q = a[n/2];
    
    return q;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n; cin>>n; vector<int >a(n);
    
    for(auto i=0; i<n; i++)
        cin>>a[i];
    
    sort(a.begin(), a.end());
    
    int Q1, Q2, Q3;
    
    Q2 = quad(a);
    
    vector<int> l(a.begin(), a.begin()+n/2);
    vector<int> h;
    
    if(n%2==0)
    {
        h.insert(h.end(), a.begin()+n/2, a.end());
    }
    else
    {
        h.insert(h.end(), a.begin()+n/2+1, a.end());
    }
    
    Q1 = quad(l);
    
    Q3 = quad(h);
    
    cout<<Q1<<"\n"<<Q2<<"\n"<<Q3<<"\n";
        
    return 0;
}
