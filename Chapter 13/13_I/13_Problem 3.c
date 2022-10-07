/* question asked to use pointers but i could not use*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[24],i,smallest,j;
    printf("Enter 25 numbers\n");
    for((i)=0;(i)<=2;(i)++)
    {
        scanf("%d",&(arr[(i)]));
    }
    smallest=(arr[0]);
    for((j)=1;(j)<=2;(j)++)
    {
        if((smallest)>(arr[(j)]))
            smallest=(arr[(j)]);
    }
    printf("smallest number given = %d\n",smallest);
}
