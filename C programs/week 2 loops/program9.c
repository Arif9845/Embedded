#include<stdio.h>

int main()
{
    int i,fact =1;
    int num ;
    printf("enter the number : ") ;
    scanf("%d",&num);
    for (i =1;i<=num;i++)
    {
        fact =fact*i;

    }

    printf("factorial of number %d  is = %d",num,fact);

return 0;
}