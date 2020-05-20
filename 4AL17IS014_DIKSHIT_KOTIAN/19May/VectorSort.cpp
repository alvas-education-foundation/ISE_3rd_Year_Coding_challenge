/*You are given N integers.Sort the N integers and print the sorted order.
Store the  integers in a vector.Vectors are sequence containers representing arrays that can change in size.*/

//Vector-Sort
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,a;
    std::cin >> n;
    
    std::vector<int> vect;
    for (int i=0;i<n;i++)
    {
        std::cin>>a;
        vect.push_back(a);
    }
    
    std::sort(vect.begin(), vect.end());
    for (auto const i : vect)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}
