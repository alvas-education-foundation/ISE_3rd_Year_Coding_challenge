/*given a main() function which takes a set of inputs. The type of input governs the kind of 
operation to be performed, i.e. concatenation for strings and addition for int or float. 
You need to write the class template AddElements which has a function add() for giving the 
sum of int or float elements. You also need to write a template specialization for the type string 
with a function concatenate() to concatenate the second string to the first string.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

#define cin ios_base::sync_with_stdio(false);
cin.tie(NULL); cin

template <class T> class AddElements {
    public:
        T element;
        AddElements(T i) {
            element = i;
        }
        T add(T i) {
            return element+i;
        }
        T concatenate(T i) {
            return element+i;
        }
};
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}