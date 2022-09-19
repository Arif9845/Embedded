#include<stdio.h>

int main()
{
    float length , breadth ;

    printf("enter the length of rectangle in cm : ");
    scanf("%f",&length);
    printf("\n enter the breadth of rectangle in cm  : ");
    scanf("%f",&breadth);

    // perimeter of rectangle 
    // formula is perimeter = 2 (l+b)

    printf("perimeter of rectangle in cm is  : = %f", 2 *(length + breadth ));
    printf("Area of rectangle in cm is  : = %f", (length * breadth ));

return 0;
}