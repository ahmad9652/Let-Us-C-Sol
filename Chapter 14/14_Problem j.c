#include<stdio.h>
#include<conio.h>
void main()
{
    int l,Extra=0 ,matrix1[3][3], matrix2[3][3], multiplied_matrix[3][3], i,j;
    printf("Enter the First matrix as you filling row\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&matrix1[i][j]);
    printf("Enter the second matrix as you filling row\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&matrix2[i][j]);
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
                {
                    for(l=0;l<=2;l++)
                {
                    Extra=Extra+matrix1[i][l]*matrix2[l][j];
                }
                multiplied_matrix[i][j] = Extra;
                Extra=0;
                }
    printf("Result:-\n");
    for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
                printf("%5d",multiplied_matrix[i][j]);
            printf("\n");
        }
}
