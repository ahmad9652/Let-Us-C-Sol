#ifndef AREAPERI_H_INCLUDED
#define area_of_square(x) (x*x)
#define area_of_triangle_side(p,q,r) areaoftriangle(p,q,r);
#define area_of_triangle_height(y,w) (0.5*y*w)
#define area_of_circle(t) (3.14*t*t)
#define perimeter_of_square(v) (4*v)
#define perimeter_of_triangle(z,a,b) (z+a+b)
#define perimeter_of_circle(d) (2*3.14*d)
#endif // AREAPERI_H_INCLUDED
#include<math.h>
float areaoftriangle(float s1,float s2, float s3)
{
    float s,a;
    s=(s1+s2+s3)/2;
    a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return(a);
}
