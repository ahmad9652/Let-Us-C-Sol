#include<stdio.h>
#include<conio.h>
#define greater(a,b) (a<b)
void main()
{
    int p,q;
    printf("Enter two number\n");
    scanf("%d%d",&p,&q);
    if greater(p,q)
    {
        printf("%d is the greater number\n",q);
    }
    else
    {
        printf("%d is the greater number\n",p);
    }
}
