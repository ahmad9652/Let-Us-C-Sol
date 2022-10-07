#include<stdio.h>
#include<conio.h>
void main()
{
    int number,table=1,i;
    printf("Enter the number to print table = ");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        table=number*i;
        printf("%d X %d = %d\n",number,i,table);
    }
}
