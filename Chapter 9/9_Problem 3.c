#include<stdio.h>
#include<conio.h>
float sin_series(int *);
int factorial(int *);
int power(int *,int *);
void main()
{
    int x;
    printf("Enter the first term = ");
    scanf("%d",&x);
    sin_series(&x);
}
float sin_series(int *m)
{
    int i;
    float b=0;
    for(i=1;i<=10;i+=2)
    {
        b=b+(power(&m,&i)/factorial(&i));
    }
    printf("Sum of the 10 terms of sin series whose first term is %d = %f",&m,b);
    return(b);
}
int factorial(int *n)
{
    int fact=1,j;
    for (j=1;j<=*n;j++)
    {
        fact=fact*(j);
    }
    return(fact);
}
int power(int *h,int *k)
{
    int p=1,c;
    for(c=1;c<=k;c++)
    {
        p=p*c;
    }
    return(p);
}
