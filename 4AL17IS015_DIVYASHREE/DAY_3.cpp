P-1

If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string list[]={"one","two","three","four","five","six","seven","eight","nine"};
    if(n>9)
    cout<<"Greater than 9";
    else   
    cout<<list[n-1];  
    return 0;

INPUT:
5
10

OUTPUT:
five
Greater than 9

P-2

Input will contain four integers print the greatest of the four integers.

#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
    return((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d));
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

INPUT:
1
2
3
4

OUTPUT:
4

P-3

to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.

#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    *a+=*b;
*b=abs(*a-2**b); 
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

INPUT:]
10
20

OUTPUT:
30
10

P-4

Print the N integers of the array in the reverse order in a single line separated by a space.

#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int* a=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
    return 0;
}

INPUT:
5
1 2 3 4 5 
OUTPUT:
5 4 3 2 1




