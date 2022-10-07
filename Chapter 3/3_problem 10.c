#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float X1,Y1,X2,Y2,X3,Y3,D1,D2,D3;
    printf("Enter X1 , Y1\n");
    scanf("%f%f",&X1,&Y1);
    printf("Enter X2 , Y2\n");
    scanf("%f%f",&X2,&Y2);
    printf("Enter X3 , Y3\n");
    scanf("%f%f",&X3,&Y3);
    D1=sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
    D2=sqrt(pow((X3-X2),2)+pow((Y3-Y2),2));
    D3=sqrt(pow((X3-X1),2)+pow((Y3-Y1),2));
    if(D1+D2==D3||D2+D3==D1||D1+D3==D2)
    {
        printf("It's a straight line");
    }
    else
    {
        printf("It's not a straight line");
    }
}
