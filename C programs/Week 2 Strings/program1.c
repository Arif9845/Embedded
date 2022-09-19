#include <stdio.h>

#include <string.h>
// char strreverse(char a[100], int length)
// {
//     printf("the reverse string is : \n");

//     for (int i = length - 1; i >= 0; i--)
//     {
//         printf("%c", a[i]);
//     }
// }

int main()
{

    char name[100];
    int flag = 0;

    printf("enter the string : ");
    scanf("%s", name);

    int z;
    z = strlen(name);
    for (int i = 0; i < strlen(name) - 1; i++)
    {
        if (name[i] != name[z - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("it is not palindrome ");
    }
    else
    {
        printf("it is palindorme");
    }

    return 0;
}