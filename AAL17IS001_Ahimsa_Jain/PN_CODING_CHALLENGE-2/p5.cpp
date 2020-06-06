5)C++ Program to Find All Roots of a Quadratic Equation

Program:

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, d, RP, IP;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(d)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        RP = -b/(2*a);
        IP =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << RP << "+" << IP << "i" << endl;
        cout << "x2 = " << RP << "-" << IP << "i" << endl;
    }

    return 0;
}