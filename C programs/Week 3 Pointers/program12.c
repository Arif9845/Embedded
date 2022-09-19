#include <stdio.h>

int main()
{

    char s[100];

    int i, j;
    printf("enter the string : ");
    scanf("%s", s);
    char *ptr[100];
    for (i = 0; i < s[i] != '\0'; i++)
    {

        ptr[i] = &s[i];
    }

    for (j = i - 1; j >= 0; j--)
    {

        printf("%c", *ptr[j]);
    }

    return 0;
}