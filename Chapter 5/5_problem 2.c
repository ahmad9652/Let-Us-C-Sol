#include<stdio.h>
#include<conio.h>
void main()
{
    int number,i,factorial=1;
    printf("Enter number to find factorial = ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("%d",factorial);
}
