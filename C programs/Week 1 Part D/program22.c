#include<stdio.h>

int main()
{
    // surface area of cube 6a2
    //volume of cube is a3

    float edge,surface_area ,volume ;
    printf("enter the edge of cube : ");
    scanf("%f",&edge);

    surface_area = 6 * (edge *edge);
    printf("surface area of cube is : %0.2f ",surface_area);

    volume = (edge*edge*edge);
    printf("\n volume of cube is :  %0.2f" , volume);


return 0;
}
