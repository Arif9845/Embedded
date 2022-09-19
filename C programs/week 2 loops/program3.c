#include <stdio.h>

int main()
{
    int n, i, j, count = 0, x = 1;
    printf("enter the range : ");
    scanf("%d", &n);

    for (j = 2; x <= n; j++)
    {
        for (i = 2; i <= j / 2; i++)
        {
            if (j % i == 0)
            {

                count = 1;
                break;
            }
        }

        if (count == 0)
        {

            printf("%d\n", j);
            x += 1;
        }

        count = 0;
    }
    return 0;
}
