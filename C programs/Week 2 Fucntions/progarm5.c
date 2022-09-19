#include<stdio.h>

float volume_sphere (float r ){
    float volume ;
    volume = 1.3333 * 3.142 *(r*r*r);
    return volume ;
}

int main()
{
    float radius,result ;
    printf("enter the radius of sphere : ");
    scanf("%f",&radius);

    result = volume_sphere(radius);
    printf("volume of sphere is %f ", result );





return 0;
}
