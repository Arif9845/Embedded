#include <stdio.h>

int LCM(int a, int b)
{
    int result = 0;
    int temp, GCD; // gcd id great  common divisor which is common divisor of both variables which is greater
    if (a > b)
        temp = a;
    else
        temp = b;

    temp = temp / 2;

    for (int i = temp; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i; // calculating the gcd
            break;
        }
    }

    result = (a * b) / GCD; // this is formula to calculate lcm of any two numbers

    return result;
}

int main()
{
    int num1, num2, result;
    printf("enter the number 1: ");
    scanf("%d", &num1);
    printf("enter the number 2: ");
    scanf("%d", &num2);

    result = LCM(num1, num2);
    printf("LCM of both numbers is :  \3 %d \3", result);
    return 0;
}