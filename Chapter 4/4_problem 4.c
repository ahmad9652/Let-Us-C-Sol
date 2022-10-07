#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    printf("Enter the third number = ");
    scanf("%d",&c);
    (a>b&&a>c)?printf("%d is greatest ",a):((b>a&&b>c)?printf("%d is greatest",b):printf("%d is greatest",c));
}
