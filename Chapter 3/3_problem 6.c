#include<stdio.h>
#include<conio.h>
void main()
{
    int age_of_Ram,age_of_Shyam,age_of_Ajay;
    printf("Enter the age of Ram = ");
    scanf("%d",&age_of_Ram);
    printf("Enter the age of Shyam = ");
    scanf("%d",&age_of_Shyam);
    printf("Enter the age of Ajay = ");
    scanf("%d",&age_of_Ajay);
    if(age_of_Ram<age_of_Shyam&&age_of_Ram<age_of_Ajay)
    {
        printf("Ram is youngest");
    }
    else if (age_of_Shyam<age_of_Ram&&age_of_Shyam<age_of_Ajay)
    {
        printf("Shyam is youngest");
    }
    else
    {
        printf("Ajay is youngest");
    }

}
