#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=0,k;
    printf("How many character in your name = ");
    scanf("%d",&k);
    char name_forward[k],name_reverse[k];
    printf("Enter your name\n");
    for(i=0;i<=k;i++)
    {
        scanf("%c",&name_forward[i]);
    }
    for(i=k;i>=0;i--)
    {
        name_reverse[j]=name_forward[i];
        j++;
    }
    printf("Your reverse name = ");
    for(j=0;j<=k;j++)
    {
        printf("%c",name_reverse[j]);
    }
}
