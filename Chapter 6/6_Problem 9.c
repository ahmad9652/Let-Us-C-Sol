#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    float x,number,sum=0,j;
    printf("Enter the X = ");
    scanf("%f",&x);
    j=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        number = (pow(j,i))*0.5;
        sum=sum+number;
    }
    sum=sum+j;
    printf("Sum of the 7 terms of logarithmic series = %f",sum);
}
