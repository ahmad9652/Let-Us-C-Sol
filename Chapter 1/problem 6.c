#include<stdio.h>
#include<conio.h>
void main()
{
    float length=1189,breadth=841;
    int i;
    for(i=0;i<=8;i++)
    {
        if(length>breadth)
        {
            printf("Paper of size A%d would have dimension = %f X %f\n",i,length,breadth);
            length=length/2;
        }
        else
        {
            printf("Paper of size A%d would have dimension = %f X %f\n",i,breadth,length);
            breadth=breadth/2;
        }
        /*(length>breadth? printf("Paper of size A%d would have dimension = %f X %f\n",i,length,breadth):printf("Paper of size A%d would have dimension = %f X %f\n",i,breadth,length));
        (length>breadth?length=length/2:(breadth=breadth/2));*/
    }

}
