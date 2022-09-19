
#include <stdio.h>
int main()
{

    int i, num;
    int count = 0;
    printf("enter the number : ");
    scanf("%d", &num);
    if (num == 1 || num == 0)
    {
        count = 1;
    }
    else if (num == 2)
    {
        count = 0;
    }

    else if (num > 2)
    {
        for (i = 2; i <= (num / 2); i++)
        {

            if (num % i == 0)
            {

                count = 1;
                break;
            }
        }
    }

    if (count ==1)
    {

        printf("the number is  not prime ");
    }
    else
    {
        printf("the number is prime ");
    }

    return 0;
}
