#include <math.h>
#include <stdio.h>

float calc(float data[]);
int main() {
    int i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    float data[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.1f", calc(data));
    return 0;
}

float calc(float data[]) {
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