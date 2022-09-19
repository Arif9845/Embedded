#include <stdio.h>

int main()
{

    int num, a[100], count = 0;

    printf("enter  no of  total numbers : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the number %d  : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= num - 1; i++)

    {
        for (int j = i + 1; j <= num - 1; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("number of duplicate items are : %d ", count);

    return 0;
}