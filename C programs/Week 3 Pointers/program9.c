#include <stdio.h>

int main()
{
    int a[100];
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int *ptr[n], temp;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d ", i + 1);
        scanf("%d", &a[i]);
        ptr[i] = &a[i];
    }
    
    //  printf("%d",*ptr[1]);
    //  printf("%d",*ptr[2]);
    //  printf("%d",*ptr[3]);
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n -1; j++)
        {
            temp = *ptr[j];
            if (*ptr[j] > *ptr[j + 1])
            {
                *ptr[j] = *ptr[j + 1];
                * ptr[j + 1] = temp;
            }
        }
    }
    // printf("%d",*ptr[0]);

    printf("after sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", *ptr[i]);
    }

    return 0;
}