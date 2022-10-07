#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,reverse,sum=0,j;
    for(i=1;i<=500;i++)
    {
        j=i;
        sum=0;
        while(j>0)
        {
            reverse=j%10;
            sum=sum+pow(reverse,3);
            j=j/10;
        }
        if(i==sum)
        {
            printf("%d is the Armstrong number\n",i);
        }


    }
}
