#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,Total_Marks=500,Aggregate_Marks,Percentage_marks;
    printf("Enter the marks of Subject 1 = ");
    scanf("%d",&a);
    printf("Enter the marks of Subject 2 = ");
    scanf("%d",&b);
    printf("Enter the marks of Subject 3 = ");
    scanf("%d",&c);
    printf("Enter the marks of Subject 4 = ");
    scanf("%d",&d);
    printf("Enter the marks of Subject 5 = ");
    scanf("%d",&e);
    Aggregate_Marks=a+b+c+d+e;
    Percentage_marks=(Aggregate_Marks*100)/Total_Marks;
    printf("Aggregate marks = %d",Aggregate_Marks);
    printf("\nPercentage Marks = %d ",Percentage_marks);
}
