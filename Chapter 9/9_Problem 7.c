#include<stdio.h>
#include<conio.h>
void Greatest_common_divisior(int *,int *);
void main()
{
    int number1,number2;
    printf("Enter two number\n");
    scanf("%d%d",&number1,&number2);
    Greatest_common_divisior(&number1,&number2);
}
void Greatest_common_divisior(int *num1,int *num2)
{
    int remainder,quotient,GCD,i=0;
    if(*num1>*num2)
    {
        while(i==0)
        {
            quotient=(*num1)/(*num2);
            remainder=(*num1)-(*num2)*quotient;
            if(remainder==0)
            {
                GCD=*num2;
                break;
            }
            *num1 = *num2;
            *num2 = remainder;
        }
        printf("Greatest Common Divisor = %d",GCD);
    }
    else
    {
        while(i==0)
        {
            quotient=(*num2)/(*num1);
            remainder=(*num2)-(*num1)*quotient;
            if(remainder==0)
            {
                GCD=*num1;
                break;
            }
            *num2 = *num1;
            *num1 = remainder;
        }
        printf("Greatest Common Divisor = %d",GCD);
    }
}
