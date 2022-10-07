#include<stdio.h>
#include<conio.h>
void main()
{
    float length,breadth,radius,area_of_rectangle, perimeter_of_rectangle,area_of_circle,circumference_of_circle;
    printf("Enter the length = ");
    scanf("%f",&length);
    printf("Enter the breadth = ");
    scanf("%f",&breadth);
    area_of_rectangle=length*breadth;
    perimeter_of_rectangle=(length+breadth)*2;
    printf("Enter the radius = ");
    scanf("%f",&radius);
    area_of_circle=3.14*radius*radius;
    circumference_of_circle=2*3.14*radius;
    printf("Area of Rectangle = %f",area_of_rectangle);
    printf("\nArea of Circle = %f",area_of_circle);
    printf("\nPerimeter of Rectangle = %f",perimeter_of_rectangle);
    printf("\nCircumference of Circle = %f",circumference_of_circle);
}
