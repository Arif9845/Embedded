#include <stdio.h>

int main()
{
    int number1, number2, number3;
    printf("enter the value for number 1 : ");
    scanf("%d", &number1);
    printf("enter the value for number 2 : ");
    scanf("%d", &number2);
    printf("enter the value for number 3 : ");
    scanf("%d", &number3);
    if ((number1 > number2) && (number1 > number3))
        printf("a is greater ");
    if ((number2 > number1) && (number2 > number3))
        printf("b is greater ");
    if ((number3 > number1) && (number3 > number2))
        printf("c is greater ");

    return 0;
}
