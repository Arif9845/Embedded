#include <stdio.h>

int main()
{

    int row, column, a[100][100];
    printf("enter  size of row  : ");
    scanf("%d", &row);

    printf("enter  size of column   : ");
    scanf("%d", &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            // printf("enter the number of row %d  and columnn %d : ", i + 1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf(" \nThe reverse of array is\n\n");
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = column - 1; j >= 0; j--)
        {

            // printf("the number of row %d  and columnn %d : ", i + 1,j+
            printf("%d\n", a[i][j]);
        }
    }

    return 0;
}