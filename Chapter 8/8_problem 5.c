/*#include<stdio.h>
#include<conio.h>
void prime_factor(int);
void main()
{
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    prime_factor(a);
}
void prime_factor(int number)
{
    int i,j,k,num;
    printf("Prime factor = ");
    for(i=2;i<=number/2;i++)
    {
        num=number%i;
        if(num==0)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j!=0)
                {
                    k=i;
                }
            }
        printf("  %d",k);
        }
    }
}*/
void main()
{
    int a,b=5;
    a=!b;
    b=!a;
    printf("%d %d",a,b);
}
