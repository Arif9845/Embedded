#include <stdio.h>

int main()
{
    int a[100];
    int n, total;
    printf("enter the size of array : ");
    scanf("%d", &n);
    float average;

    int *ptr[n], temp;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d ", i + 1);
        scanf("%d", &a[i]);
        ptr[i] = &a[i];
    }

    for (int i = 0; i < n; i++)
    {
        total = total + *ptr[i];
    }
    average = total / n;

    printf("average  of  array   : %0.2f ", average);
    return 0;
}