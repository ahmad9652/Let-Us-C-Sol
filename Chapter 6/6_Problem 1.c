#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,count;
    for(i=1;i<=300;i++)
    {
        j=i;
        count=0;
        for(k=2;k<=i/2;k++)
        {
            if(i%k==0)
            {
                count++;
                break;
            }
        }
        if(count==0&&i!=1)
        {
            printf("\nPrime number = %d",i);
        }

    }
}
