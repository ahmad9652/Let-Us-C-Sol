#include<stdio.h>
#include<conio.h>
void main()
{
    float X,Y;
    printf("Enter the coordinates of point\n");
    scanf("%f%f",&X,&Y);
    if(Y==0)
    {
        printf("it is on x axis");
    }
    else if (X==0)
    {
        printf("it is on y axis");
    }
    else if(X==0&&Y==0)
    {
        printf("it is on origin");
    }
    else if(X>1&&Y>1)
    {
        printf("it is on First Quadrant");
    }
    else if (X<1&&Y>1)
    {
        printf("it is on second Quadrant");
    }
    else if (X<1&&Y<1)
    {
        printf("it is on Third Quadrent");
    }
    else
    {
        printf("it is on Fourth Quadrent");
    }
}
