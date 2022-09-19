#include<stdio.h>
#include<math.h>

int main()
{
    int number ;
    float sqrt_number;
    printf("enter the number ");
    scanf("%d",&number);
    
    sqrt_number = sqrt(number);
    printf("the square root of number is : %f ",sqrt_number);


return 0;
}