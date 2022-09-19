#include <stdio.h>

int main()
{

    int range, temp, a = 0, r, sum = 0;

    printf("enter the range : ");
    scanf("%d", &range);
    for (int i = 11; a <= range; i++)
    {
        sum = 0;
        temp = i;
        while (i > 0)
        {
            r = i % 10;
            sum = sum + (r * r * r);
            i = i / 10;
        }

        if (sum == temp)
        {

            printf("%d\n", sum);

            a++;
        }

        i = temp;
    }

    return 0;
}
