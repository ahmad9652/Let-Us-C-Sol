#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    int i;
    for (i=0;i<=255;i++)
    {
        c=i;
        printf("%d %c\n",i,c);
    }
    getch();
}
