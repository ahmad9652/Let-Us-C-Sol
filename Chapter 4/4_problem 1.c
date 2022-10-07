#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Enter the character = ");
    scanf("%c",&c);
    ((c>=97&&c<=122)?printf("It's a small case alphabet "):printf("It's not a small case alphabet "));

}
