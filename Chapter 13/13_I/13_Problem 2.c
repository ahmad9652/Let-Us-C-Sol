#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("How long array do you want = ");
    scanf("%d",&n);
    int arr[n-1],i;
    printf("Enter %d integer\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=(n)/2;i++)
    {
        if(arr[i]==arr[n-i-1])
                printf("%d = %d\n",arr[i],arr[n-i-1]);
        else
            printf("%d != %d\n",arr[i],arr[n-i-1]);
    }
}
