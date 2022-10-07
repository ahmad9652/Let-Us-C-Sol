#include<stdio.h>
#include<conio.h>
void main()
{
    int j=1;
    while(j==1)
    {
        int k;
        int factorial,number,i,j;
        printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\n");
        printf("Choose an operation to perform = ");
        scanf("%d",&k);
        switch(k)
        {
            case 1:

                    printf("Enter the number to find the factorial = ");
                    scanf("%d",&number);
                    factorial=1;
                    for(i=1;i<=number;i++)
                    {
                        factorial=factorial*i;
                    }
                    printf("%d! = %d\n",number,factorial);
                    break;
            case 2:
                    printf("Enter the number to find whether it is prime or not = ");
                    scanf("%d",&number);
                    for(i=2;i<number;i++)
                    {
                        j=number%i;
                        if(j==0)
                        {
                            printf("%d is not a prime number\n",number);
                            break;
                        }
                    }
                    printf("%d is a prime number\n",number);
                    break;
            case 3:
                    printf("Enter the number to check whether the number is odd or even = ");
                    scanf("%d",&number);
                    if(number%2==0)
                    {
                        printf("%d is an even number\n",number);
                    }
                    else
                    {
                        printf("%d is an odd number\n",number);
                    }
                    break;
            case 4:
                    exit(4);
        }

    }
}
