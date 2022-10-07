#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float S,S1,S2,S3,area;
    printf("Enter Side1 = ");
    scanf("%f",&S1);
    printf("Enter Side2 = ");
    scanf("%f",&S2);
    printf("Enter Side3 = ");
    scanf("%f",&S3);
    S=(S1+S2+S3)/2;
    area=sqrt(S*(S-S1)*(S-S2)*(S-S3));
    printf("Area of triangle = %f",area);


}
