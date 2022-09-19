#include <stdio.h>

int y=10;

int myfun(int a)
{
    return a * a;
    y=20;
}

int main()
{
    int num, result;
    printf("enter the number: ");
    scanf("%d", &num);
    result = myfun(num);
    printf("the square of number is :  %d ", result);
    return 0;
}