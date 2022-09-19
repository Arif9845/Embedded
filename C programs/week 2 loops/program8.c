#include <stdio.h>
int main()
{

    int range, x1, x2, temp = 0, a = 3;
    printf("enter the size of fibonacci series : ");
    scanf("%d", &range);

    x1 = 0;
    x2 = 1;
    printf("%d %d ", x1, x2);

    for (int i = 0; a <= range; i++)
    {

        temp = x2;
        x2 = x1 + x2;
        printf("%d ", x2);
        x1 = temp;
        a++;
    }
}
