#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[25],i;
    printf("Enter 25 number\n");
    for ( i = 0; i < 25; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int k,p=0,q;
    printf("Enter number to search from above entered number\n");
    scanf("%d",&k);
    for ( i = 0; i < 25; i++)
    {
        /* code */
        if (arr[i]==k)
        {
            p++;
        }
    }
    if(p>0)
    {
        printf("%d is not entered above\n",k);
    }
    else
    {
        printf("%d is %d times entered above\n",k,p);
    }


}
