#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float population=100000;
    int i;
    for(i=10;i>=1;i--)
    {
        population=(population*100)/110;
        printf("Population of the %d year = %f\n",i,population);
    }
}
