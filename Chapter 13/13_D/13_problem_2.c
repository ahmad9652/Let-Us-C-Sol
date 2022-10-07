#include<stdio.h>
#include<conio.h>
void main()
{
    int f,i,j,k[5];
    printf("enter 25 number\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&k[i]);
    }
    /*for(f=0;f<25;f++)
    {
        for(i=f+1;i<25;i++)
    {
        if(k[f]>k[i])
        {
            j=k[f];
            k[f]=k[i];
            k[i]=j;
        }
    }
    }
    printf("Entered number in selection sort\n");
    for(i=0;i<25;i++)
    {
        printf("%d\n",k[i]);
    }
    printf("\n\n\nBubble Sort\n");
    for(f=0;f<25;f++)
    {
    for(i=0;i<25;i++)
    {
        if(k[i]>k[i+1])
        {
            j=k[i];
            k[i]=k[i+1];
            k[i+1]=j;
        }
    }
    }
    printf("Entered number in bubble sort\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",k[i]);
    }*/
    printf("\n\n\nInsertion Sort\n");
    for(f=0;f<25;f++)
    {
        for(i=f+1;i<25;i++)
    {
        if(k[f]>k[i])
        {
            j=k[f];
            k[f]=k[i];
            k[i]=j;
        }
    }
    }

}
