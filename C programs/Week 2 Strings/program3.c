#include <stdio.h>
#include<string.h>

int main()
{
    char  a[100];
    int  total;

    printf("enter the string  : \n ");
    scanf("%s",a);

    for (int i = 0; i < strlen(a)-1; i++)
    {

        for (int j = 0; j <strlen(a)-1; j++)
        {
            int temp = a[j];
            if (a[j] > a[j + 1])
            {
                a[j] = a[j + 1]; // bubble sort
                a[j + 1] = temp;
            }
        }
    }

    printf("the string after sorting  : %s \n",a);

    

    return 0;
}