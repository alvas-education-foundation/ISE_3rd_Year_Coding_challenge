1.	Write a C program to count distinct element in an array.

Program:
#include <stdio.h>
void distict_elements(int a[], int n);
int main()
{
    int size_array, i, arr[20];
    scanf(“%d”, &size_array);
    // Get the array elements
    for(i=0; i<size_array; i++)
    {
        scanf(“%d”, &arr[i]);
    }
       distict_elements(arr, size_array);
    return 0;
}
void distict_elements(int a[], int n)
{
    int i, j;
 for (i=0; i<n; i++)
    {
                for (j=0; j<i; j++)
        {
            if (a[i] == a[j])
                break;
        }
                if (i == j)
            printf(“%d “, a[i]);
    }
}

