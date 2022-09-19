#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the value for variable1 : ");
    scanf("%d", &a);
    printf("enter the value for variable1 : ");
    scanf("%d", &b);
    printf("enter the value for variable1 : ");
    scanf("%d", &c);
    printf("enter the value for variable1 : ");
    scanf("%d", &d);
    float v, w, x, y;
    v = a * b * c / d - a;

    printf("the value for first operation is : %f\n", v);
    printf("the value for second operation is : %f\n", w);
    printf("the value for third  operation is : %f\n", x);
    printf("the value for fourth  operation is : %f\n", y);
    return 0;
}