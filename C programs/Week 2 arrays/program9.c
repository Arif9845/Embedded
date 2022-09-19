#include <stdio.h>

int main()
{

    int num, a[100],
        b[100],
        c[100];

    printf("enter  the size of array1  : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the number %d  : ", i + 1);
        scanf("%d", &a[i]);
    }

    int j = 0, k = 0;
    for (int i = 0; i < num; i++)
    {
        if (a[i] % 2 == 0)
        {

            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }

    printf("the even numbers array is  : \n");

    for (int i = 0; i < j; i++)
    {
        printf("%d\n", b[i]);
    }
    printf("the odd numbers array is  : \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}