#include<stdio.h>
#include<conio.h>
#include"areaperi.h"
void main()
{
    float f,g,h,i,j,k,l,m,n,o,p,q,r,s;
    int ch;
    int z=1;
    while(z==1)
    {
    printf("Choose an appropriate operation\n");
    printf("1 Area of circle\n2 Circumference of Circle\n3 Area of square\n4 Perimeter of Square\n5 Area of triangle by giving 3 side\n6 Area of triangle by giving Base and height\n7 perimeter of triangle\n8 Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the radius = ");
        canf("%f",&f);
        g=area_of_circle(f);
        printf("Area of circle = %f\n",g);
        break;
    case 2:
        printf("Enter the radius = ");
        scanf("%f",&f);
        h=perimeter_of_circle(f);
        printf("Circumference of circle = %f\n",h);
        break;
    case 3:
        printf("Enter the side of a square = ");
        scanf("%f",&i);
        j=area_of_square(i);
        printf("Area of Square = %f\n",j);
        break;
    case 4:
        printf("Enter the side of a square = ");
        scanf("%f",&i);
        k=perimeter_of_square(i);
        printf("Perimeter of square = %f\n",k);
        break;
    case 5:
        printf("Enter the side1\n");
        scanf("%f",&l);
        printf("Enter the side2\n");
        scanf("%f",&m);
        printf("Enter the side3\n");
        scanf("%f",&n);
        o=area_of_triangle_side(l,m,n);
        printf("Area of triangle = %f",o);
        break;
    case 6:
        printf("Enter the base = ");
        scanf("%f",p);
        printf("Enter the Height = ");
        scanf("%f",q);
        r=area_of_triangle_height(p,q);
        printf("Area of triangle = %f",r);
        break;
    case 7:
        printf("Enter the side1\n");
        scanf("%f",&l);
        printf("Enter the side2\n");
        scanf("%f",&m);
        printf("Enter the side3\n");
        scanf("%f",&n);
        s=perimeter_of_triangle(l,m,n);
        printf("Perimeter of triangle = ",s);
        break;
    case 8:
        exit(8);
    default:
        printf("Choose an Appropriate Operation from menu\n");
    }
    }
}
