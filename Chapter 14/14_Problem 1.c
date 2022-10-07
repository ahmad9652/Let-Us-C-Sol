#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Enter numbers like you are filling a row with 5 columns\n");
    int i,smaller,arr[5][5];
    for(i=0;i<=4;i++)
        scanf("%d%d%d%d%d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4]);
    for(i=0;i<=4;i++)
        printf("%d %5d %5d %5d %5d\n",arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4]);
    smaller=arr[0][0];
    for(i=0;i<=4;i++)
    {
        if(smaller>arr[i][0])
            smaller=arr[i][0];
        else if(smaller>arr[i][1])
            smaller=arr[i][1];
        else if(smaller>arr[i][2])
            smaller=arr[i][2];
        else if(smaller>arr[i][3])
            smaller=arr[i][3];
        else if(smaller>arr[i][4])
            smaller=arr[i][4];
    }
    printf("Smallest number = %d \n",smaller);
}
