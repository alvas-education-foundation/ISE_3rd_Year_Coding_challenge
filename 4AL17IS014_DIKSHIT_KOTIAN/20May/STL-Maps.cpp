/*You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.
Each student can have multiple answer sheets.So the teacher has Q queries:
1 X Y:Add the marks Y to the student whose name is X.
2 X: Erase the marks of the students whose name is X.
3 X: Print the marks of the students whose name is X. (If x didn't get any marks print 0.)*/

//STL-Maps
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {
     int q; cin >> q;
    string name;
    map<string,int> notes;
    for(int i(0),type(0),note(0) ; i<q ; ++i)
    {
        cin>>type>>name;
        switch(type)
        {
            case 1:{
                cin>>note;
                notes[name] += note;
                break;
            }
            case 2:
                notes[name] = 0;
                break;
            case 3:
                cout << notes[name] << endl;
                break;
        }
    }
    return 0;
}
