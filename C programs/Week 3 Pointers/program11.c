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


    
    for (int i = n-1; i >= 0; i--)
    {
        printf("\n%d", *ptr[i]);
    }

    return 0;
}