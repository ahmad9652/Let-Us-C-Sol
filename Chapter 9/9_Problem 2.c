#include<stdio.h>
#include<conio.h>
void average_percentage(int *,int *,int *);
void main()
{
    int sub1,sub2,sub3;
    printf("Enter the three subject marks\n");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    average_percentage(&sub1,&sub2,&sub3);
}
void average_percentage(int *a,int *b,int *c)
{
    int sum;
    float average,percentage;
    sum=*a+*b+*c;
    average=sum/3;
    percentage=average;
    printf("Average of the marks = %f\n",average);
    printf("Percentage of the marks = %f\n",percentage);
}
