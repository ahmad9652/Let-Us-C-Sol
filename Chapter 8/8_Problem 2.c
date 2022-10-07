#include<stdio.h>
#include<conio.h>
void power(int,int);
void main()
{
    int base,pow;
    printf("Enter the base and power\n");
    scanf("%d%d",&base,&pow);
    power(base,pow);
}
void power(int x, int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("%d^%d = %d",x,y,p);
}
