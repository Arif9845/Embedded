#include <stdio.h>

int calculator(char ch, int a[100][100], int b[100][100], int row1, int column1, int row2, int column2)
{
    int c[100][100];

   
    
    switch (ch)
    {
    case '+':
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {

                printf("the value  after addition  row %d and column %d is %d  : \n  ", i + 1, j + 1, c[i][j]);
            }
        }
        break;

    case '-':
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {

                printf("the value  after subtraction   row %d and column %d is %d    :\n", i + 1, j + 1, c[i][j]);
            }
        }
        break;

    // case '*':
    //     for (int i = 0; i < row1; i++)
    //     {
    //         for (int j = 0; j < column1; j++)
    //         {
    //             c[i][j] = a[i][j] * b[i][j];
    //         }
    //     }

    //     for (int i = 0; i < row1; i++)
    //     {
    //         for (int j = 0; j < column1; j++)
    //         {

    //             printf("the value  after  multiplication row %d and column %d is %d : \n", i + 1, j + 1, c[i][j]);
    //         }
    //     }
    //     break;

    default:

        printf("enter the valid operator ");
        break;
    }
}

int main()

{

    int row1, column1, a[100][100];
    int row2, column2, b[100][100];

    char ch;

    printf("enter the operation (+,-,*)\n");
    scanf("%c", &ch);
    printf("enter rwo  size of  matrix 1  : ");
    scanf("%d", &row1);

    printf("enter column size of matrix 1   : ");
    scanf("%d", &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("enter the number of row %d  and column %d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

printf("for addition and substraction matrix size should be equal : ");
printf("for multiplication row of matrix1 and column of matrix2 should be equal : ");

    printf("enter row  size of matrix 2   : ");
    scanf("%d", &row2);

    printf("enter   column size of  matrix 2   : ");
    scanf("%d", &column2);
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("enter the number of row %d  and columnn %d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }


    calculator(ch, a, b, row1, column1, row2, column2);

    return 0;
}
