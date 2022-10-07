#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix1[6][6],matrix2[6][6],i,j,matrix_sum[6][6];
    printf("Enter the matrix as you filling the row\n");
    for(i=0;i<=5;i++)
        for(j=0;j<=5;j++)
            {
                scanf("%d",&matrix1[i][j]);
                matrix_sum[i][j] = matrix1[i][j];
            }
    printf("\n\n\nEnter the second matrix as you filling the row\n");
    for(i=0;i<=5;i++)
        for(j=0;j<=5;j++)
        {
            scanf("%d",&matrix2[i][j]);
            matrix_sum[i][j] = matrix_sum[i][j] + matrix2[i][j];
        }

    printf("First Matrix:-\n");
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
            printf("%5d",matrix1[i][j]);
        printf("\n");
    }
    printf("\n\n\n");
    printf("Second Matrix:-\n");
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
            printf("%5d",matrix2[i][j]);
        printf("\n");
    }
    printf("\n\n\n");
    printf("Sum of the above two Matrix:-\n");
    for(i=0;i<=5;i++)
        {
            for(j=0;j<=5;j++)
                printf("%5d",matrix_sum[i][j]);
            printf("\n");
        }
    printf("\n\n\n");

}
