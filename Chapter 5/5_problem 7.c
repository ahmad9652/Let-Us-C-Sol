#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num,p=0,n=0,z=0;
    printf("How many numbers do you want to enter = ");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        printf("Enter the number = ");
        scanf("%d",&num);
        if(num>0)
        {
            p++;
        }
        if(num<0)
        {
            n++;
        }
        if(num==0)
        {
            z++;
        }
    }
    printf("you have entered %d zeros , %d positive number and %d negative number",z,p,n);
}
