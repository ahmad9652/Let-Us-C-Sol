#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l=1;
    for(i=1;i<=4;i++)
    {
        for(k=i;k<=3;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",l);
            l++;
        }

        printf("\n");
    }
}
