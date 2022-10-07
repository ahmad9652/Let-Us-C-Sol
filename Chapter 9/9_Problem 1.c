#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum_average_SD(int *,int *,int *,int *,int *);
void main()
{
    int i,j,k,l,m;
    printf("Enter Five numbers\n");
    scanf("%d%d%d%d%d",&i,&j,&k,&l,&m);
    sum_average_SD(&i,&j,&k,&l,&m);
}
void sum_average_SD(int *a,int *b,int *c,int *d,int *e)
{
    int sum;
    float average,SD,x,x2;
    sum=*a+*b+*c+*d+*e;
    printf("Sum of the numbers = %d\n",sum);
    average=sum/5;
    printf("Average of the numbers = %f\n",average);
    x=*a*0.2+*b*0.2+*c*0.2+*d*0.2+*e*0.2;
    x2=(*a)*(*a)*0.2+(*b)*(*b)*0.2+(*c)*(*c)*0.2+(*d)*(*d)*0.2+(*e)*(*e)*0.2;
    SD=sqrt(x2-pow(x,2));
    printf("Standard  deviation of the numbers = %f\n",SD);
}
