Read 3 numbers from stdin and print their sum to stdout.
Sample Input

1 2 7
Sample Output

10

code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int Number_One, Number_Two, Number_Three;
    
    cin >> Number_One >> Number_Two >> Number_Three;
    
    cout << Number_One + Number_Two + Number_Three << endl;
    
    return 0;
}
