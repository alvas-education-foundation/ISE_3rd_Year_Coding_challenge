Question:
Given an array,X of N integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of 1 decimal place. An error margin of  +0.1 or -0.1 will be tolerated for the standard deviation.
Input format:
1.The first line contains an integer,N , denoting the number of elements in the array. 
2.The second line contains  N space-separated integers describing the respective elements of the array.
Output format:
Print the standard deviation on a new line, rounded to a scale of  1 decimal place.
Constraints:
N=[5 to 100]
x=[0 to 10000], is the index of array X


#include <math.h>
#include <stdio.h>

float calcSD(float data[]);
int main() {
    int i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    float data[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.1f", calcSD(data));
    return 0;
}

float calcSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 10);
}