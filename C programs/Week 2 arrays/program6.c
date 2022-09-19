#include <stdio.h>

int main()
{
    int a[100], b[100], total, count = 0, c;

    printf("enter the total numbers : \n ");
    scanf("%d", &total);

    for (int i = 0; i < total; i++)

    {
        printf("enter the number % d : ", i + 1);
        scanf("%d", &a[i]);
        b[i] = -1;
    }
    for (int i = 0; i < total; i++)
    {
        count = 1;
        for (int j = i + 1; j < total; j++)
        {
            if (a[i] == a[j ])
            {

                count++;
                b[j] = 0;
            }
        }
        if (b[i] != 0)
        {
            b[i] = count;
        }
    }
    for (int i =0;i<total;i++)
    {
        printf("%d\n",b[i]);
    }

    for (int i = 0; i < total; i++)
    {
        if (b[i] > 0)
        {
            printf("the number %d printed %d times \n", a[i], b[i]);
        }
    }
}