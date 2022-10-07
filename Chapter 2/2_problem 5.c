#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float L1,L2,G1,G2,D;
    printf("Enter the coordinates of latitude\n");
    scanf("%f%f",&L1,&L2);
    printf("Enter the coordinates of longitude\n");
    scanf("%f%f",&G1,&G2);
    D=3963*1/(cos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1)));
    printf("Distance between the given coordinates is %f nautical miles",D);

}
