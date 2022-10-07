#include<stdio.h>
#include<conio.h>
#define arithmetic_mean(x,y) ((x+y)/2)
#define absolute_value(w) {absolutevalue(w)}
#define Upper_to_lower_case(c) uppertolowercase(c)
#define bigger_of_two_numbers(a,b) (a<b)
char uppertolowercase(char);
int absolutevalue(int);
void main()
{
    int ch,l=1,a,b;
    char d;
    while(l==1)
    {
        printf("Choose an operation to perform\n");
        printf("1. To find Arithmetic mean\n2. To find absolute value of a number\n3. To convert upper case to lower case alphabet\n4. To obtain the bigger of two numbers\n5. To exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter two number\n");
            scanf("%d%d",&a,&b);
            printf("Arithmetic mean = %d\n",arithmetic_mean(a,b));
            break;
        case 2:
            printf("Enter a number\n");
            scanf("%d",&a);
            printf("Absolute value of %d = %d\n",a,absolutevalue(a));
            break;
        case 3:
            printf("Enter an upper case alphabet = ");
            scanf("%c",&d);
            a=d;
            if(a>=65&&a<=90)
                printf( "Lower case alphabet of %c = %c\n",d,Upper_to_lower_case(d));
            else
            {
                printf("%c is not an upper case Alphabet\n",d);
            }
            break;
        case 4:
            printf("Enter two number\n");
            scanf("%d%d",&a,&b);
            if(bigger_of_two_numbers(a,b))
                printf("%d is greater number than %d\n",b,a);
            else
                printf("%d is greater number than %d\n",a,b);
            break;
        case 5:
            exit(5);
        default :
            printf("Choose a valid operation to perform\n");
        }
    }
}
char uppertolowercase(char c)
{
    int q;
    char lower;
    q=c;
    lower=q+32;
    return(lower);
}
int absolutevalue(int w)
{
    if(w<0)
    {
        w*=-1;
    }
    else
    {
        w=w;
    }
    return(w);
}
