#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float X,Y,r,S;
    printf("Enter Cartesian Coordinates\n");
    scanf("%f%f",&X,&Y);
    r=sqrt(X*X+Y*Y);
    S=1/tan(Y/X);
    printf("Polar coordinates are (%f,%f)",r,S);
}
