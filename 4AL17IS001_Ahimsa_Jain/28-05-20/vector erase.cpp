The first line of the input contains an integer .The next line contains  space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers  and  denoting the range that should be erased from the vector inclusive of a and exclusive of b.

Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,i=0;
  cin>>n;
  vector  <int> v(n);
  while(n--){
  cin >>  v[i++];  
  }
  int p,s,e;
  cin >>  p ;
  v.erase(v.begin()+p-1);
  cin >>  s >>  e ;
  v.erase(v.begin()+s-1,v.begin()+e-1);
  i=0;
  cout  <<  v.size()  <<endl;
  while(v.size()!=i){
    cout  <<  v[i++]  <<  " ";
  }
  return  0;
}