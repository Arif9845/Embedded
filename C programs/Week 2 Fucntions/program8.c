#include <stdio.h>

int power(int num, int exp)
{
    int result = 1;

    for (int i = 1; i <= exp; i++)
    {
        result = result * num;
    }
    return result;
}

int main()
{
    int num, exp, result;
    printf("enter the number : ");
    scanf("%d", &num);
    printf("enter the exponant: ");
    scanf("%d", &exp);

    result = power(num, exp);
    printf("%d", result);

    return 0;
}