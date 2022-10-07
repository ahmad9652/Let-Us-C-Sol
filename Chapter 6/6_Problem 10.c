#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,k;
    for (i=1;i<=30;i++)
    {
        for (j=1;j<=30;j++)
        {
            for(k=1;k<=30;k++)
            {
                if(pow(i,2)+pow(j,2)==pow(k,2))
                {
                    printf("%d , %d and %d are pythogorean triplets\n",i,j,k);
                }
                if(pow(j,2)+pow(k,2)==pow(i,2))
                {
                    printf("%d , %d and %d are pythogorean triplets\n",j,k,i);
                }
                if(pow(k,2)+pow(i,2)==pow(j,2))
                {
                    printf("%d , %d and %d are pythogorean triplets\n",k,i,j);
                }
            }
        }
    }
}
