 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int year,days;
     printf("Enter the year = ");
     scanf("%d",&year);
     days=(year*365)+(year/4);/*its a mistake */
     if(days%7==1)
     {
         printf("It's Monday");
     }
     else if (days%7==2)
        printf("it's Tuesday");
     else if (days%7==3)
        printf("it's Wednesday");
     else if(days%7==4)
        printf("it's Thursday");
     else if(days%7==5)
        printf("it's Friday");
     else if(days%7==6)
        printf("it's Saturday");
     else
     {
         printf("it's Sunday");
     }

 }
