#include<stdio.h>
#include<conio.h>
int modify(int);
void main()
{
    int j=0,arr[10],i,ar[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    printf("you entered these 10 numbers = ");
    for(i=0;i<=9;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<=9;i++)
    {
        ar[j]=modify(arr[i]);
        j++;
    }
    printf("3 times of entered 10 numbers = ");
    for(i=0;i<=9;i++)
        printf("%d ",ar[i]);
}
int modify(int a)
{
        int i;
        a*=3;
        return(a);
}
