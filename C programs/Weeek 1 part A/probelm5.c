// area of circle pi * r * r
#include <stdio.h>
#define pi 3.142

int main()
{
    float radius;
    float area;
    printf("enter the radius of circle : ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("the area of circle is : %f ", area);

    return 0;
}
