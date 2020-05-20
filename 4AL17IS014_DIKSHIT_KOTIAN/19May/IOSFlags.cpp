/*Your manager gave you a text file with many lines of numbers to format and print. 
For each row of  space-separated doubles, format and print the numbers using the specifications in the Output Format section below.
For each test case, print 3 lines containing the formatted A,B , and C, respectively. Each A,B ,C and must be formatted as follows:

A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
B: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.*/

//print pretty
#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << hex << left << showbase << nouppercase; 
        cout << (long long) A << endl;

        cout << dec << right << setw(15) << setfill('_') << showpos << fixed <<
        setprecision(2); 
        cout << B << endl; 

        cout << scientific << uppercase << noshowpos << setprecision(9); 
        cout << C << endl; 
	}
	return 0;

}