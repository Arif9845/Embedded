// C Program To Make a Simple Calculator Using switch...case and using functions
#include <stdio.h>

int calculator(char ch, int a, int b)
{
    int result;
    switch (ch)
    {
    case '+':
        return result = a + b;

    case '-':
        return result = a - b;

    case '*':
        return result = a * b;

    case '/':
        return result = a / b;
    default:

        printf("enter the valid operator ");
        return result = 0;
    }
}

int main()
{
    char ch;
    int a, b, result;

    printf("Enter an Operator (+, z-, *, /): ");
    scanf("%c", &ch);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);

    result = calculator(ch, a, b);
    if (result > 0)
    {

        printf("the value is %d ", result);
    }

    return 0;
}
