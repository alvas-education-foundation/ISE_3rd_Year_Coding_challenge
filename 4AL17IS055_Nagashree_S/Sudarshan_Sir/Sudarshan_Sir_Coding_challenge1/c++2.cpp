/*
Question:
2)Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place
Input format:
1.The first line contains an integer, N, denoting the number of elements in arrays A and W.
2.The second line contains  N space-separated integers describing the respective elements of array A .
3.The third line contains  N space-separated integers describing the respective elements of W array .
Output format:
•Print the weighted mean on a new line. Your answer should be rounded to a scale of  1 decimal place (i.e.,  format).
Constraints:
•N=[5 to 50]
•ai=[0 to 100]
•Wi=[0 to. 100]
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n; cin>>n; int a[n+4], w;
    double num=0.0, den=0.0;
    
    for(int i=0;i<n;i++) 
        cin>>a[i];
    
    for(int i=0;i<n;i++) 
    {
        cin>>w;
        den+=w;
        num+=(a[i]*w);
    }
    
    double wmean = (double)(num/den);
    
    printf("%0.1f\n", wmean);
    
    return 0;
}#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n; cin>>n; int a[n+4], w;
    double num=0.0, den=0.0;
    
    for(int i=0;i<n;i++) 
        cin>>a[i];
    
    for(int i=0;i<n;i++) 
    {
        cin>>w;
        den+=w;
        num+=(a[i]*w);
    }
    
    double wmean = (double)(num/den);
    
    printf("%0.1f\n", wmean);
    
    return 0;
}