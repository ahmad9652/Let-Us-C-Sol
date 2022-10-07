#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float t,v,wcf;
    printf("Enter the temperature of air\n");
    scanf("%f",&t);
    printf("Enter the velocity of air\n");
    scanf("%f",&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("Wind chill factor = %f",wcf);

}
