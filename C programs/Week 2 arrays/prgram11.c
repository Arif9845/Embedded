#include <stdio.h>

int main()
{
    int a[100], total;
    int b[100];

    printf("enter the total numbers : \n ");
    scanf("%d", &total);

    for (int i = 0; i < total; i++)

    {
        printf("enter the number % d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int position;
    printf("enter the position where you want to delete : ");
    scanf("%d", &position);

    for (int i = position; i < total; i++)
    {
        a[i]=a[i+1];
    }

    for (int i = 0; i < total-1; i++)
    {
        printf("%d\n", a[i]);
    }
    // printf("enter the value you want delete ")
    return 0;
}