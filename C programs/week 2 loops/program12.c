#include <stdio.h>

int main()
{
    int a[100], total;

    printf("enter the total numbers : \n ");
    scanf("%d", &total);

    for (int i = 0; i < total; i++)

    {
        printf("enter the number % d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < total -1; i++)
    {

        for (int j = 0; j < total -1; j++)
        {
            int temp = a[j];
            if (a[j] > a[j + 1])
            {
                a[j] = a[j + 1]; // bubble sort
                a[j + 1] = temp;
            }
        }
    }

    printf("the Numbers after ascending  : \n");
    for (int i = total -1 ; i >=0; i--)
    {
        printf("the  number   is : %d \n",  a[i]);
    }

    return 0;
}