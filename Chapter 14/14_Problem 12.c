#include<stdio.h>
#include<conio.h>
void main()
{
    int Determinant=0,matrix1[6][6],matrix2[6][6],i,j,k;
    printf("Enter the Matrix as you filling the row\n");
    for(i=0;i<=5;i++)
        for(j=0;j<=5;j++)
            scanf("%d",&matrix1[i][j]);
    for(i=0;i<=0;i++)
        for(j=0;j<=5;j++)
            for(k=0;k<=5;k++)
                Determinant=Determinant+matrix1[i][j]*
}
