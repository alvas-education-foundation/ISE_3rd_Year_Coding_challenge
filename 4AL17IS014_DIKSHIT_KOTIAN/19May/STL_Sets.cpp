/*Implement STL sets to:
1.Add an element  to the set.
2.Delete an element  from the set. (If the number  is not present in the set, then do nothing).
3.If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).*/

//STL Sets
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
int count;
set<int> s;
cin >> count;
for (int i=0; i<count; ++i){
    int type, n;
    cin >> type >> n;
    switch (type){
        case 1:
            s.insert(n);
            break;
        case 2:
            s.erase(n);
            break;
        case 3:
            cout << (s.find(n) == s.end() ? "No" : "Yes") << endl;
            break;
    }
}  
return 0;
}