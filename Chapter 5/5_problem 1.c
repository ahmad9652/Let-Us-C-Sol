#include<stdio.h>
#include<conio.h>
void main()
{
    int employee,working_hour,rate;
    printf("Enter the working hour = ");
    scanf("%d",&working_hour);
    if (working_hour>40)
    {
        working_hour=working_hour-40;
        printf("overtime pay = %d",working_hour*10*12);
    }
    else
    {
        printf("Does not worked more than 40 hours");
    }
}
