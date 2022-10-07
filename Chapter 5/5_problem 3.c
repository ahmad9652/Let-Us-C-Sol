#include<stdio.h>
#include<conio.h>
void main()
{
    int number,power,i,j=1;
    printf("Enter the number = ");
    scanf("%d",&number);
    printf("Enter the power = ");
    scanf("%d",&power);
    for(i=power;i>=1;i--)
    {
        j=j*number;
    }
    printf("Number after power = %d",j);

}
