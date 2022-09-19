#include<stdio.h>



float multi (int a , float b)
{
    return a *b;
}

int main()
{
    int num1;
    float num2,result ;
    printf("enter the integer number : ");
    scanf("%d",&num1);

    printf("enter the  floating number : ");
    scanf("%f",&num2);

    result = multi(num1,num2);
    printf("the multiplication of both integer and floating number is  %0.2f ",result);

return 0;
}
