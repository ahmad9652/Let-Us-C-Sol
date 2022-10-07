#include<stdio.h>
#include<conio.h>
#include<math.h>
void distance(float *, float *, float *, float *);
void area_of_coordinates(float *, float *, float *, float *,float *, float *);
void main()
{
    float X1,Y1,X2,Y2,X3,Y3;
    printf("Enter X1 and Y1\n");
    scanf("%f%f",&X1,&Y1);
    printf("Enter X2 and Y2\n");
    scanf("%f%f",&X2,&Y2);
    printf("Enter X3 and Y3\n");
    scanf("%f%f",&X3,&Y3);
    distance(&X1,&Y1,&X2,&Y2);
    area_of_coordinates(&X1,&Y1,&X2,&Y2,&X3,&Y3);
}
void  distance(float *p, float *q, float *r, float *s)
{
    float d;
    d=                  sqrt((pow(((*p)-(*r)),2)+(pow(((*q)-(*s)),2))));
    printf("Distance between given coordinates = %f\n",d);
}
void area_of_coordinates(float *a, float *b, float *c, float *d,float *e, float *f)
{
    float A;
    A=0.5*((*a)*((*d)-(*f))+(*c)*((*f)-(*b))+(*e)*((*b)-(*d)));
    if(A==0)
    {
        printf("it is a straight line\n");
    }
    if(A<0)
    {
        A=-1*A;
    }
    printf("Area of Triangle = %f\n",A);
}
