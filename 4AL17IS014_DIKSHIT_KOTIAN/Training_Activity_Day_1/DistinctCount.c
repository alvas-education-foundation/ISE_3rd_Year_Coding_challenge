#include <stdio.h>
int main()
{
    int a[100], freq[100];
    int size, i, j, count,ele=0;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("No of distinct elements ");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            ele=ele+1;
        }
    }
    printf("%d",ele);
    return 0;
}