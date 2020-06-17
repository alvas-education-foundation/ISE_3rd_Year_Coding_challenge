#include <stdio.h>

void calc_dist(int a[], int n)
{

    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int n, i;
    printf("Enter the number of element");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    calc_dist(a, n);
    return 0;
}
