#include<stdio.h>
#include<conio.h>
void main()
{
    int number,a,b,c,d,e,reverse,i;
    printf("Enter a five digit number = ");
    scanf("%d",&number);
    i=number;
    a=number%10;
    number=number/10;
    b=number%10;
    number=number/10;
    c=number%10;
    number=number/10;
    d=number%10;
    number=number/10;
    e=number;
    reverse=a*10000+b*1000+c*100+d*10+e;
    if(i==reverse)
    {
        printf("%d is Reverse number which is equal to the original number that is %d",reverse,i);

    }
    else
    {
        printf("%d is Reverse number which is not equal to the original number that is %d",reverse,i);
    }
}
