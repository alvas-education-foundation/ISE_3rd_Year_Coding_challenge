/*One of the important topics of Object Oriented Programming is Inheritance. 
Inheritance allows us to define a class in terms of another class, which allows us in the reusability of the code.
Now write a function in Isosceles class such that the output is as given below.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
          void description()
          {
              cout<<"In an isosceles triangle two sides are equal\n";
          }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
