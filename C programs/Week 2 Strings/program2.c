#include <stdio.h>
#include <string.h>

int main()
{
    char name[100],
        c;
    int count = 0;
    printf("enter the string : ");
    scanf("%s", name);

    printf("enter the character  : ");
    scanf(" %c", &c);

    for (int i = 0; i < (strlen(name) - 1); i++)
    {
        if (name[i] == c)
        {
            count++;
        }
    }
    printf("the character present %d times ", count);
    return 0;
}