/*
Question:
1)Develop the programs in c, c++, java or python to the solve the following problem statements
Activity 1:
Given an array x,n , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.
Input format:
1.The first line contains an integer, N, denoting the number of elements in the array.
2.The second line contains  N space-separated integers describing the array's elements.
Output format:
Print  lines of output in the following order:
1.Print the mean on a new line, to a scale of  decimal place 
2.Print the median on a new line, to a scale of  decimal place 
3.Print the mode on a new line; if more than one such value exists, print the numerically smallest one.
Constraints:
�N belongs to [10, 2500]
�X belongs to [0, 10000]
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int max_n = 1e5+5;

int main() 
{
    
    int n; cin>>n; int a[max_n]; long sum=0;
    
    for(auto i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    double mean, median;
    
    mean = (double)sum/n;
    
    sort(a,a+n);
    if(n%2==0) 
        median = (double)(a[n/2-1]+a[n/2])/2;
    else 
        median = a[n/2];
    
    int mode=a[0], mx=1, cnt=1;
    for(auto i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) {
            ++cnt;
        }
        else 
            cnt=1;
        if(cnt>mx) 
        {
            mx=cnt;
            mode=a[i];
        }
    }
    
    cout<<mean<<"\n"<<median<<"\n"<<mode;
    
    return 0;
}






/*
Question:
2)Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place
Input format:
1.The first line contains an integer, N, denoting the number of elements in arrays A and W.
2.The second line contains  N space-separated integers describing the respective elements of array A .
3.The third line contains  N space-separated integers describing the respective elements of W array .
Output format:
�Print the weighted mean on a new line. Your answer should be rounded to a scale of  1 decimal place (i.e.,  format).
Constraints:
�N=[5 to 50]
�ai=[0 to 100]
�Wi=[0 to. 100]
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
}






/*
Question:
3)Given an array,X , of n  integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that ,Q1,Q2,Q3  are integers.
Input Format
�The first line contains an integer,n , denoting the number of elements in the array.
�The second line contains  n space-separated integers describing the array's elements.
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







/*
Question:
4)The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles. Given an array,X, of  n integers and an array, F, representing the respective frequencies of X's elements, construct a data set,S, where each  occurs at frequency f. Then calculate and print S's interquartile range, rounded to a scale of  
1 decimal place.
Input format:
The first line contains an integer,n, denoting the number of elements in arrays X and F .
The second line contains  n space-separated integers describing the respective elements of array X.
The third line contains  n space-separated integers describing the respective elements of array F.
	
Output Format:
Print the interquartile range for the expanded data set on a new line. Round your answer to a scale of  1 decimal place.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double quad(vector<int> a)
{
    double q; int n=a.size(); 
    
    if(n%2==0) 
        q = (double)(a[n/2-1] + a[n/2])/2;
    else 
        q = (double)a[n/2];
    
    return q;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n; cin>>n; vector<int> a(n), f(n);
    
    for(auto i=0; i<n; i++)
        cin>>a[i];
    
    int sum=0;
    for(auto i=0; i<n; i++)
    {
        cin>>f[i];
        sum += f[i];
    }
    
    vector<int> s(sum);
    int idx=0;
    for(auto i=0; i<n; i++)
    {
        for(auto j=0; j<f[i]; j++)
        {
            s[idx] = a[i];
            idx++;
        }
    }
    
    sort(s.begin(), s.end());
    
    vector<int> l(s.begin(), s.begin()+sum/2);
    vector<int> h;
    
    if(sum%2==0)
    {
        h.insert(h.end(), s.begin()+sum/2, s.end());
    }
    else
    {
        h.insert(h.end(), s.begin()+sum/2+1, s.end());
    }
    
    double Q1 = quad(l);
    
    double Q3 = quad(h);
    
    printf("%.1f", (Q3-Q1));
    
    return 0;
}