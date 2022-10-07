#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    int i,j,k,l;
    for(i=71;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            c=j;
            printf("%c ",c);
        }
        for(k=j*2;k<=71*2;k++)
        {
            printf("  ");
        }
        for(l=i;l>=65;l--)
        {
            if(l<=70)
            {
                c=l;
                printf("%c ",c);
            }
        }
        printf("\n");
    }
}
