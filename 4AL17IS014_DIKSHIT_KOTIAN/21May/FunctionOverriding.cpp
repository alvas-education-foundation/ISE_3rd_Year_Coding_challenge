/*The Rectangle class should have two data fields-width and height of int types. 
The class should have display() method, to print the width and height of the rectangle separated by space.
The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class.
The class should have read_input() method, to read the values of width and height of the rectangle. 
The RectangleArea class should also overload the display() method to print the area  of the rectangle.*/

#include <iostream>

using namespace std;

 class Rectangle
 {
    protected:
        int width;
        int height;
    public:
        void display()
        {
            cout<<width<<" "<<height<<endl;
        }

};

class RectangleArea:public Rectangle
{
    public:
        //int w, h;
        void read_input()
        {
            cin>>width>>height;
        }
        void display()
        {
            cout<<width*height<<endl;
        }
};

int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    
    return 0;
}