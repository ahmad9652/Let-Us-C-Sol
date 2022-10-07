#include<stdio.h>
#include<conio.h>
void leap_year(int);
void main()
{
    int a;
    printf("Enter the Year = ");
    scanf("%d",&a);
    leap_year(a);
}
void leap_year(int year)
{
    if(year%4==0&&year%100!=0)
    {
        printf("%d is a leap year",year);
    }
    else if(year%400==0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
}
