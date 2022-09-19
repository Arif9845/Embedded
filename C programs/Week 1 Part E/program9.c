#include <stdio.h>

int main()
{
    float side1, side2, side3;

    printf("enter the value for side1 ");
    scanf("%d", &side1);

    printf("enter the value for side 2 ");
    scanf("%d", &side2);

    printf("enter the value for side 3 ");
    scanf("%d", &side3);

    if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
    }
    else

        printf("triangle is scalene ");
    if ((side1 == side2) && (side2 == side3) && (side1 == side3))
        printf("triangle is equilateral ");
    else if (side1 == side2)
    {
        if (side1 == side3)
        {
        }
        else
            printf("It is Isosceles");
    }
    else if (side2 == side3)
        printf("It is Isosceles");

    return 0;
}