#include<stdio.h>
#include<conio.h>
#include<math.h>
void area_of_triangle(float *,float *, float *);
void main()
{
    float a,b,c;
    printf("Enter the side a = ");
    scanf("%f",&a);
    printf("Enter the side b = ");
    scanf("%f",&b);
    printf("Enter the side c = ");
    scanf("%f",&c);
    area_of_triangle(&a,&b,&c);
}
void area_of_triangle(float *S1, float *S2, float *S3)
{
    float       S,A;
                    S=((*S1)+(*S2)+(*S3))/2;
                    A=sqrt(S *(S-(*S1))*(S-(*S2))*(S-(*S3)));
    printf("Area of the triangle = %f",A);
}
