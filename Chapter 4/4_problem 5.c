#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float angle,a;
    printf("Enter the angle = ");
    scanf("%d",&angle);
    a=pow(sin(angle),2)+pow(cos(angle),2);
    if(a==1)
    {
        printf("The sum of squares of sine and cosine of input angle is equal to 1");
    }
    else
    {
        printf("The sum of squares of sine and cosine of input angle is not equal to 1");
    }
}
