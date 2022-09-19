#include<stdio.h>

int main()
{
    int a =100,b=100,c=30;

    (a>b)?(a>c)?(printf("A is greater :")):(printf("C is greater")):(b>c)?(b>a)?(printf("b is greater")):(printf("a is greater ")):(printf("c is grater"));
return 0;
}