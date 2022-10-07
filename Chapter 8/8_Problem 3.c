#include<stdio.h>
#include<conio.h>
void Roman_year(int);
void main()
{
    int a;
    printf("Enter the year = ");
    scanf("%d",&a);
    Roman_year(a);
}
void Roman_year(int year)
{
    int i,remainder;
    printf("Entered year in Roman Number = ");
    remainder=year%1000;
    year=year/1000;
    for(i=1;i<=year;i++)
    {
        printf("M");
    }
    year=remainder/500;
    for(i=1;i<=year;i++)
    {
        printf("D");
    }
    remainder=remainder%500;
    year=remainder/100;
    for(i=1;i<=year;i++)
    {
        printf("C");
    }
    remainder=remainder%100;
    year=remainder/50;
    for(i=1;i<=year;i++)
    {
        printf("L");
    }
    remainder=remainder%50;
    year=remainder/10;
    for(i=1;i<=year;i++)
    {
        printf("X");
    }
    remainder=remainder%10;
    year=remainder/5;
    for(i=1;i<=year;i++)
    {
        printf("V");
    }
    remainder=remainder%5;
    for(i=1;i<=remainder;i++)
    {
        printf("I");
    }

}
