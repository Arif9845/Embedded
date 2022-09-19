#include <stdio.h>

int main()
{
    char a;
    printf("enter the character : ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
        printf("it is alphabet");
    else if (a >= '0' && a <= '10')
        printf("it is Digit  ");
    else
        printf("it is special character");
    return 0;
}