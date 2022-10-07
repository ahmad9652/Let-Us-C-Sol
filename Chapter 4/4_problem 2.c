#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("Enter a Symbol = ");
    scanf("%c",&c);
    ((c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127)?printf("It's a Special Symbol"):printf("it's not a special symbol"));
}
