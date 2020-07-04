you are given  integers.Sort the  integers and print the sorted order.
Store the  integers in a vector.Vectors are sequence containers representing arrays that can change in size.

Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
int size;
cin>>size;
int a;
for(int i=0;i<size;i++)
{
 cin>>a;
 v.push_back(a);
}
sort(v.begin(),v.end());
 for(int i=0;i<size;i++)
    {
      cout<<v[i]<<" ";
    }
    return 0;
}
