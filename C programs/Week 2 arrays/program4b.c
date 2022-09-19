#include <stdio.h>

int arrayprint(int a[100][100], int row, int column)
{
    printf("the values are printing inside the function :\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf(" the value  row %d  and column %d is %d  \n : ", i + 1, j + 1, a[i][j]);
        }
    }
}

int main()
{

    int row, column, a[100][100];
    printf("enter  size of row  : ");
    scanf("%d", &row);

    printf("enter  size of row  : ");
    scanf("%d", &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter the number of row %d  and columnn %d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    arrayprint(a, row, column);

    return 0;
}