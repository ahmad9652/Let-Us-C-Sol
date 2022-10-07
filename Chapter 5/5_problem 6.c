#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,matchstick=21;
    while(matchstick>=1)
    {
        printf("Choose matchstick between 1 to 4 = ");
        scanf("%d",&num1);
        if(num1>4)
        {
            printf("Invalid choice\n");
            break;
        }
        num2=5-num1;
        printf("Computer chooses the matchstick = %d\t",num2);
        matchstick=matchstick-num1-num2;
        if(matchstick==1)
        {
            printf("\nYou have looses the game from computer");
            break;
        }
    }
}
