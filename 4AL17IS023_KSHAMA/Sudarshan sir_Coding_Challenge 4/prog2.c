/*
Activity 2: 
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number,n, determine and print whether it's Prime or Not-Prime.

Input Format
The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines contains an integer, n, to be tested for primality.
Constraints
•T={1 to 30}
•n={ 1 to 2*109}

Output Format
For each test case, print whether n is  Prime or Not-Prime.
*/

#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}