#include<stdio.h>
#include<conio.h>
void factorial(int);
void main()
{
    int number;
    printf("Enter the number = ");
    scanf("%d",&number);
    factorial(number);
}
void factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("%d! = %d",x,fact);
}
