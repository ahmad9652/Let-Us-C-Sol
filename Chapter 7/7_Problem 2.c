#include<stdio.h>
#include<conio.h>
void main()
{
    int sub_fail,c,grace_marks;
    printf("Enter the class = ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("Enter how many subject the student has failed = ");
        scanf("%d",&sub_fail);
        if(sub_fail<=3)
        {
             grace_marks=6*5;
             printf("Grace Marks = %d\n",grace_marks);
        }
        else
        {
            printf("Grace marks = 0\n");
        }
        break;
    case 2:
        printf("Enter how many subject the student has failed = ");
        scanf("%d",&sub_fail);
        if(sub_fail<=2)
        {
             grace_marks=6*4;
             printf("Grace Marks = %d\n",grace_marks);
        }
        else
        {
            printf("Grace marks = 0\n");
        }
        break;
    case 3:
        printf("Enter how many subject the student has failed = ");
        scanf("%d",&sub_fail);
        if(sub_fail<=1)
        {
             grace_marks=5;
             printf("Grace Marks = %d\n",grace_marks);
        }
        else
        {
            printf("Grace marks = 0\n");
        }
        break;
    }
}
