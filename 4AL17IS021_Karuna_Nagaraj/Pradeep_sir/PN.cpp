#include <bits/stdc++.h> 
using namespace std; 
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
void push(Node** head_ref, int new_data)  
{   
    Node* new_node = new Node(); 
    new_node->data = new_data;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
}  
void insertAfter(Node* prev_node, int new_data)  
{  
	if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
    Node* new_node = new Node(); 
    new_node->data = new_data;  
    new_node->next = prev_node->next;  
    prev_node->next = new_node;  
}  
void append(Node** head_ref, int new_data)  
{  
    Node* new_node = new Node(); 
    Node *last = *head_ref;
    new_node->data = new_data;  
    new_node->next = NULL;  
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
    while (last->next != NULL)  
        last = last->next;  
    last->next = new_node;  
    return;  
}  
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
}  
int main()  
{  
    Node* head = NULL;  
    append(&head, 8);  
    push(&head, 3);  
    push(&head, 1);  
    append(&head, 4);  
    insertAfter(head->next, 10);  
    cout<<"Created Linked list is: ";  
    printList(head);   
    return 0;  
}  






#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}





#include <iostream>
using namespace std;
int area(int s)
{
	return (s * s);
}
int area(int l, int b)
{
	return (l * b);
}
float area(float r)
{
	return (3.14 * r * r);
}
float area(float bs, float ht)
{
	return ((bs * ht) / 2);
}
int main()
{
	int s, l, b;
	float r, bs, ht;
	cout << "Enter side of a square:";
	cin >> s;
	cout << "Enter length and breadth of rectangle:";
	cin >> l >> b;
	cout << "Enter radius of circle:";
	cin >> r;
	cout << "Enter base and height of triangle:";
	cin >> bs >> ht;
	cout << "Area of square is" << area(s);
	cout << "\nArea of rectangle is " << area(l, b);
	cout << "\nArea of circle is " << area(r);
	cout << "\nArea of triangle is " << area(bs, ht);
}





#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
	long i, n, x, sum = 1;
	cout <<�1 + x + x ^ 2 +��+ x ^ n�;
	cout <<�nnEnter the value of x and n :�;
	cin >> x >> n;

	for (i = 1; i <= n; ++i)
		sum += pow(x, i);
	cout <<�nSum =�<< sum;
}