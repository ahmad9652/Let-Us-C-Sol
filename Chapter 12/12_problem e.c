#include<stdio.h>
#include<conio.h>
#include"interest.h"
void main()
{
    float P,R,T;
    printf("The Principal amount = ");
    scanf("%f",&fP);
    printf("The Rate of interest = ");
    scanf("%f",&R);
    printf("The Time period = ");
    scanf("%f",&T);
    printf("Amount will be = %f",simple_interest(P,R,T));
}
