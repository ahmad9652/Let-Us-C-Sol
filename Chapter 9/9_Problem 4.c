#include<stdio.h>
#include<conio.h>
void shift_right(int *,int *, int *);
void main()
{
    int a,b,c;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter c = ");
    scanf("%d",&c);
    shift_right(&a,&b,&c);
    printf("a = %d    b = %d    c = %d",a,b,c);
}
void shift_right(int *x,int *y,int *z)
{
    int t;
    t=*x;
    *x=*z;
    *z=*y;
    *y=t;
}
