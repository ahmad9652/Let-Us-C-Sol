#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d",&year);
    (year<400)?((year%4==0)?printf("it's a leap year"):printf("It's not a leap year")):((year%400==0)?printf("it's a leap year"):printf("It's not a leap year"));
}
