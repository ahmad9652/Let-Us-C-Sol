#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<=24;i++)

    {
        if(i==24||i>=1&&i<12)
        {
            printf("%d AM\n",i);
        }
        else
        {
            printf("%d PM\n",i);
        }
    }
}
