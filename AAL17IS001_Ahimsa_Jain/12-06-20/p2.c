2.C program to check whether the character is an alphabet or not

#include <stdio.h>
int main()
{
    char ch;
    printf(“Enter a character: “);
    scanf(” %c”,&ch);
    printf(“\n”);
    if( (ch >= ‘a’ && ch <= ‘z’) || ( ch >= ‘A’ && ch <=’Z’))
        printf(“%c is an alphabet\n”,ch);
    else
        printf(“%c is not an alphabet\n”,ch);

    return 0;
}
