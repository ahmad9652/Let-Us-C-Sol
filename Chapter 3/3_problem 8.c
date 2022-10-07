#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    if(a<1)
    {
        a=a*-1;
        printf("Absolute value of entered number = %d",a);
    }
    else
    {
        printf("Absolute value of entered number = %d",a);
    }
}
