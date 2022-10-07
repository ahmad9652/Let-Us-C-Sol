#include<stdio.h>
#include<conio.h>
void main()
{
    float length,breadth,area,perimeter;
    printf("Enter the length of Rectangle = ");
    scanf("%f",&length);
    printf("Enter the breadth of Rectangle = ");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter)
    {
        printf("The area is greater than it's Perimeter");
    }
    else
    {
        printf("The area is not greater than it's Perimeter");
    }

}
