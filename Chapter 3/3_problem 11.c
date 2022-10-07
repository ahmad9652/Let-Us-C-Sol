#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float X,Y,X1,Y1,radius,D;
    printf("Enter the coordinates of center of circle\n");
    scanf("%f%f",&X,&Y);
    printf("Enter the radius of center of circle\n");
    scanf("%f",&radius);
    printf("Enter the coordinates of center of point\n");
    scanf("%f%f",&X1,&Y1);
    D=sqrt(pow((X1-X),2)+pow((Y1-Y),2));
    if(D<radius)
    {
        printf("The point is lie inside the circle");
    }
    else
    {
        printf("The point is not lie inside the circle");
    }

}
