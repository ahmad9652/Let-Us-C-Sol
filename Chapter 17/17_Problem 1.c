#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int roll_number;
        char name[10];
        char department[10];
        char course[10];
        int year_of_joining;
    };
    struct student s[2];
    int i,j,k;
    printf("Enter Roll number , name , Department , Course , Year of joining\n");
    for(i=0;i<=1;i++)
    {
        scanf("%d%s%s%s%d",&s[i].roll_number,&s[i].name,&s[i].department,&s[i].course,&s[i].year_of_joining);
    }
    printf("Enter the year = ");
    scanf("%d",&k);
    for(i=0;i<=1;i++)
    {
       if(k==s[i].year_of_joining)
       {
           printf("%d %s %s %s %d",s[i].roll_number,s[i].name,s[i].department,s[i].course,s[i].year_of_joining);
       }
    }
}
