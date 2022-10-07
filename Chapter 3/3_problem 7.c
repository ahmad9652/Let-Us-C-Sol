#include<stdio.h>
#include<conio.h>
void main()
{
    int angle1,angle2,angle3;
    printf("Enter the angle 1 = ");
    scanf("%d",&angle1);
    printf("Enter the angle 2 = ");
    scanf("%d",&angle2);
    printf("Enter the angle 3 = ");
    scanf("%d",&angle3);
    if(angle1+angle2+angle3==180)
    {
        printf("It's a valid triangle");
    }
    else
    {
        printf("It's not a valid triangle");
    }

}
