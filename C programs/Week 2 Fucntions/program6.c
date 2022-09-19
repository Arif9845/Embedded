#include <stdio.h>

int fact(int number)
{
    int total_fact = 1;
    if (number > 0)
    {
        total_fact = number * fact(number - 1);
    }

    return total_fact;
}

int main()
{
    int n = 5, x;
    x = fact(n);
    printf("the factroial of number is %d ", x);
    return 0;
}