/*You are provided with a vector of N integers. Then, you are given 2 queries. 
For the first query, you are provided with 1 integer, which denotes a position in the vector. 
The value at this position in the vector needs to be erased. 
The next query consists of 2 integers denoting a range of the positions in the vector.
The elements which fall under that range should be removed. 
The second query is performed on the updated vector which we get after performing the first query.*/

//Vector-Erase
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a;
    std::cin >> n;
    
    std::vector<int> vect;
    for (int i=0;i<n;i++)
    {
        std::cin>>a;
        vect.push_back(a);
    } 
    int b,c,d;
    std::cin>>b;
    vect.erase(vect.begin()+(b-1));
    std::cin>>c>>d;
    vect.erase(vect.begin()+(c-1),vect.begin()+(d-1));
    std::cout<<vect.size()<<endl;
    for(auto const i:vect)
    {
        std::cout<<i<<" ";
    }
    return 0;
}