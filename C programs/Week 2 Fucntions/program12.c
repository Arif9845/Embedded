#include <stdio.h>

int a = 10;

void myfun()
{
    int a = 30;
    printf("%d", a);
}

int main()
{
    int a = 20;
    printf("%d", a);

    myfun();
    return 0;
}

