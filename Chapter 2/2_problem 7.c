#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int angle;
    float a,b,c,d,e,f;
    printf("Enter angle = ");
    scanf("%d",&angle);
    a=sin(angle);
    b=cos(angle);
    c=tan(angle);
    d=1/a;
    e=1/b;
    f=1/c;
    printf("sin %d = %f\ncos %d = %f\ntan %d = %f\ncosec %d = %f\nsec %d = %f\ncot %d = %f",angle,a,angle,b,angle,c,angle,d,angle,e,angle,f);

}
