#include<stdio.h>
#include<conio.h>
void main()
{
    int a,c,d;
    printf("Enter the value of position C = ");
    scanf("%d",&c);
    printf("Enter the value of position D = ");
    scanf("%d",&d);
    a=c;
    c=d;
    d=a;
    printf("Changed value of position C = %d",c);
    printf("\nChanged value of position D = %d",d);
}
