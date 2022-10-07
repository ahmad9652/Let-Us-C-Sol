#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,q,n;
    float a,p,r;
    for(i=1;i<=10;i++)
    {
        printf("Enter the Principle , rate of interest and time period in year\n");
        scanf("%f%f%d",&p,&r,&n);
        printf("How many times interest compound in a year\n");
        scanf("%d",&n);
        a=p*pow((1+r/q),n*q);
        printf("Amount = %f ",a);
    }

}
