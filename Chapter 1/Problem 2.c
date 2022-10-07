#include<stdio.h>
#include<conio.h>
void main()
{
    float distance,meters,feet,inches,centimeters;
    printf("Enter the distance in Km\n");
    scanf("%f",&distance);
    meters=distance*1000;
    centimeters=meters*100;
    inches=39370.1*distance;
    feet=3280.84*distance;
    printf("fMeters = %f",meters);
    printf("\nFeet = %f",feet);
    printf("\nInches = %f",inches);
    printf("\nCentimeters = %f",centimeters);
}
