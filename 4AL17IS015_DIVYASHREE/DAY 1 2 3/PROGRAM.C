PROGRAM-1

There is a series,S, where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series a,b,c using recursion.
     #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c)
{
    if(n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
    return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
    
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
}

INPUT:
5
1 2 3
OUTPUT:
11

PROGRAM-2

You are given an array of integers,marks, denoting the marks scored by students in a class.
The alternating elements marks0,marks2 ,marks4  and so on denote the marks of boys.
Similarly,marks1,marks2 ,marks3  and so on denote the marks of girls.
The array name, , works as a pointer which stores the base address of that array. In other words,  contains the address where  is stored in the memory.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender) {
  int sum = 0;
    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2) 
        sum += *(marks + i);
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
    return 0;
}