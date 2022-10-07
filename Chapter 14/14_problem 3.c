#include<stdio.h>
#include<conio.h>
void main()
{
    int transpose[4][4],matrix[4][4];
    printf("Enter the matrix as you filling the row of 4 columns \n");
    int i,j=0,k;
    for(i=0;i<=3;i++)
        scanf("%d%d%d%d",&matrix[i][0],&matrix[i][1],&matrix[i][2],&matrix[i][3]);
    printf("\n\n\n\n");
    for(i=0;i<=3;i++)
        printf("%d | %4d | %4d | %4d\n",matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3]);
    for(i=0;i<=3;i++)
    {
        transpose[j][0]=matrix[0][i];
        j++;
    }
    j=0;
    for(i=0;i<=3;i++)
    {
        transpose[j][1]=matrix[1][i];
        j++;
    }
    j=0;
    for(i=0;i<=3;i++)
    {
        transpose[j][2]=matrix[2][i];
        j++;
    }
    j=0;
    for(i=0;i<=3;i++)
    {
        transpose[j][3]=matrix[3][i];
        j++;
    }
    printf("\n\n\n\n");
    for(i=0;i<=3;i++)
        printf("%d | %4d | %4d | %4d\n",transpose[i][0],transpose[i][1],transpose[i][2],transpose[i][3]);

}
