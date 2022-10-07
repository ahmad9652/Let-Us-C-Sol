#include<stdio.h>
#include<conio.h>
void main()
{
    int number,a,b,c,d,e,Sum;
    printf("Enter a five digit number = ");
    scanf("%d",&number);
    a=number%10;
    number=number/10;
    b=number%10;
    number=number/10;
    c=number%10;
    number=number/10;
    d=number%10;
    number=number/10;
    e=number%10;
    number=number/10;
    Sum=a*10000+b*1000+c*100+d*10+e;
    printf("Sum of the digits of given number = %d",Sum);
}
