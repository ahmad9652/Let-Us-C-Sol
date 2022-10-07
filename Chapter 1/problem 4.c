#include<stdio.h>
#include<conio.h>
void main()
{
    float FD,CD;
    printf("Enter Temperature in Fahrenheit Degrees = ");
    scanf("%f",&FD);
    CD=(FD-32)*5/9;
    printf("Temperature in Centigrade Degrees = %f",CD);
    getch();
}
