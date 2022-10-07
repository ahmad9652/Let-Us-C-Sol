 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int factorial=1,i,k;
     float l,sum=0;
     for(i=1;i<=7;i++)
     {
         for(k=1;k<=i;k++)
         {
             factorial=factorial*k;
         }
         l=factorial;
         sum=sum+i/l;
     }
     printf("Sum of the given series = %f",sum);
 }
