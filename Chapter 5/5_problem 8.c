#include<stdio.h>
#include<conio.h>
void  main()
{
    int number,octal_number=0,t;
    printf("Enter the integer number = ");
    scanf("%d",&number);
    while(number>=1)
    {
        t=number%8;
        octal_number=octal_number+t*10;
        number=number/8;
    }
    printf("octal number of given number = %d",octal_number);

}
