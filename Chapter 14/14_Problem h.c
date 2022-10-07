#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,k;
    printf("Enter the number of column or row of a square matrix = ");
    scanf("%d",&a);
    int matrix[a][a],transpose[a][a];
    printf("Enter the matrix as you filling the matrix's rows\n");
    for(i=0;i<=a-1;i++)
    {
        for(j=0;j<=a-1;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
    }
    printf("\nMatrix:-\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
            printf("%5d",matrix[i][j]);
         printf("\n");
    }
    for(i=0;i<a;i++)
        for(j=0;j<a;j++)
            {
                transpose[j][i]=matrix[i][j];
            }
    printf("\nTranspose:-\n");
    for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
                printf("%5d",transpose[i][j]);
            printf("\n");
        }
    for(i=0;i<a;i++)
        for(j=0;j<a;j++)
            {
                if(transpose[i][j]!=matrix[i][j]);
                    {
                        printf("Given matrix is not a symmetric matrix\n");
                        break;
                    }
            }
}
