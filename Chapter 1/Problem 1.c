#include<stdio.h>
#include<conio.h>
void main()
{
    int salary;
    float dearness,Rent,Gross_salary;
    printf("Enter your Salary\n");
    scanf("%d",&salary);
    dearness=(salary*40)/100;
    printf("Dearness=%f",dearness);
    Rent=(salary*20)/100;
    printf("\nRent=%f",Rent);
    Gross_salary=salary-dearness-Rent;
    printf("\nGross Salary = %f",Gross_salary);
}
