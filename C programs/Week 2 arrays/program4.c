#include <stdio.h>

int arrayprint(int a[100], int total)
{
    printf("the values are printing inside the function :\n ");
    for (int i = 0; i < total; i++)
    {
        
        printf("the  number   is  %d : %d \n", i + 1, a[i]);
    }
}

int main()
{

    int num, a[100];
    printf("enter  no of  total numbers : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the number %d  : ", i + 1);
        scanf("%d", &a[i]);
    }

    arrayprint(a, num);

    return 0;
}