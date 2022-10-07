#include<stdio.h>
#include<conio.h>
void main()
{
    int count,number,i,biggest,smallest;
    printf("How many number do you want to enter = ");
    scanf("%d",&count);
    printf("Enter the number = ");
    scanf("%d",&number);
    biggest=smallest=number;
    for(i=1;i<=count-1;i++)
    {
        printf("Enter the number = ");
        scanf("%d",&number);
        if(number>biggest)
        {
            biggest=number;
        }
        if(number<smallest)
        {
            smallest=number;
        }
    }
    int p;
    p=biggest-smallest;
    printf("\nBiggest number = %d",biggest);
    printf("\nSmallest number = %d",smallest);
    printf("\nRange = %d",p);
}
