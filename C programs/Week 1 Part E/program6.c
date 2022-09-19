#include<stdio.h>

int main()
{
    int point1 , point2;
    printf("enter the coordinate point 1 'x' : ");
    scanf("%d",&point1);
    printf("enter the coordinate point 2  'y': ");
    scanf("%d",&point2);

    if (point1>0 && point2 >0)printf("lies in 1st quadrant");
    if (point1<0 && point2 >0)printf("lies in 2nd quadrant");
    if (point1<0 && point2 <0)printf("lies in 3rd quadrant");
    if (point1>0 && point2 <0)printf("lies in 4th quadrant");

return 0;
}