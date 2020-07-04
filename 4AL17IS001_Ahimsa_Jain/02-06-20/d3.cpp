Goki recently had a breakup, so he wants to have some more friends in his life. Goki has N people who he can be friends with, so he decides to choose among them according to their skills set Yi(1<=i<=n). He wants atleast X skills in his friends.
Help Goki find his friends.

 INPUT
First line of the input contains an integer N denoting the number of people.

Next line contains a single integer X - denoting the minimum skill required to be Goki's friend. 

Next n lines contain one integer Y - denoting the skill of ith person.

OUTPUT
For each person print if he can be friend with Goki. 'YES' (without quotes) if he can be friends with Goki else 'NO' (without quotes).

CONSTRAINTS

1<=N<=1000000
1<=X,Y<=1000000

SAMPLE INPUT 
5
100
110
130
90
100
45
SAMPLE OUTPUT 
YES
YES
NO
YES
NO

#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

int n,x,y;

cin>>n>>x;

for(int i=1;i<=n;i++)

{

cin>>y;

for(int j=1;j<=n;j++)

{

if(y>=x)

{

cout<<"YES"<<endl;

break;

}

else

cout<<"NO"<<endl;

break;

}

}

 

}