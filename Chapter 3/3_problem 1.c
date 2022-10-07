#include<stdio.h>
#include<conio.h>
void main()
{
    float cost_price,selling_price,profit,loss;
    printf("Enter the Cost Price = ");
    scanf("%f",&cost_price);
    printf("Enter the Selling Price = ");
    scanf("%f",&selling_price);
    if(selling_price>cost_price)
    {
        float a;
        a=selling_price-cost_price;
        printf("Seller made %f Rs profit",a);
    }
    else
    {
        float a;
        a=cost_price-selling_price;
        printf("Seller made %f Rs loss",a);
    }

}
