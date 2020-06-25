/*Activity 3:
Given a time in 12 -hour AM/PM format, convert it to Railway's (24-hour) time.

Input Format
A single string s containing a time in -12 hour clock format(HH:mm:ss:am/pm)

Constraints
All input times are valid

Output Format
Convert and print the given time in -24 hour format.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int hh, mm, ss;
    char a[3];
    printf("Enter hours, minutes and seconds: ");
    scanf("%d%d%d", &hh,&mm,&ss);
    printf("Enter string 'am' or 'pm': ");
    scanf("%s", a);
    if(hh <= 12 && mm <= 59 && ss <= 59)      
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
           && (hh != 0) && (hh != 12))
        {
            hh = hh + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
        {
            hh = 0;
        }
        printf("The 24-hour format is:");
        printf("%02d:%02d:%02d", hh, mm, ss);
        printf("\n\n");
    }
    else
    {
        printf("Provide the correct inputs.");
    }
    return 0;
}