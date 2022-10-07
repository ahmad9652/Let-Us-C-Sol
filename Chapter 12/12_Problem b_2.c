#include<stdio.h>
#include<conio.h>
#define upper_case(y) (y>=65&&y<=90)
void main()
{
    char c;
    printf("Enter the character = ");
    scanf("%c",&c);
    if upper_case(c)
    {
        printf("%c is a upper case character",c);
    }
    else
    {
        printf("%c is not a upper case character",c);
    }
}
