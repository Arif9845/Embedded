#include <stdio.h>

int main()
{
    int n;

    int a[100];

    printf("enter the size of array : ");
    scanf("%d", &n);

    int *ptr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d ", i + 1);
        scanf("%d", &a[i]);
        ptr[i] = &a[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n the value of no %d = %d",i+1, *ptr[i]);
    }
    return 0;
}