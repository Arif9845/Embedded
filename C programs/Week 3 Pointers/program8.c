#include <stdio.h>
int factorial(int *num)
{
    int fact = 1;
    for (int i = 1; i <= *num; i++)
    {

        fact = fact * i;
    }

    return fact;
}
int main()
{
    int number;
    int fact;

    printf("enter the number: ");
    scanf("%d", &number);

    fact =factorial(&number);
printf("%d",fact);
    return 0;
}