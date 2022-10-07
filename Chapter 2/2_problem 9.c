#include<stdio.h>
#include<conio.h>
void main()
{
    int currency,number_of_notes,a,b,c,d,e,f;
    printf("Enter the currency = Rs. ");
    scanf("%d",&currency);
    a=currency/100;
    currency=currency%100;
    b=currency/50;
    currency=currency%50;
    c=currency/10;
    currency=currency%10;
    d=currency/5;
    currency=currency%5;
    e=currency/2;
    f=currency%2;
    printf("The smallest number of notes of Rs.100 is %d , Rs.50 is %d , Rs.10 is %d , Rs.5 is %d , Rs.2 is %d and Rs.1 is %d",a,b,c,d,e,f);
}
