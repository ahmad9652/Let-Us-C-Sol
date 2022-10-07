#include<stdio.h>
#include<conio.h>
#define small_case(x) (x>=97&&x<=122)
void main()
{
    char c;
    printf("Enter the character = ");
    scanf("%c",&c);
    if small_case(c)
    {
        printf("%c is the small case",c);
    }
    else
    {
        printf("%c is not the small case",c);
    }
}
