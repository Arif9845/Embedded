#include<stdio.h>

int main()
{
    int a =2,b=20;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("the value of a and b after add using addition is : %d " , *ptr1+ *ptr2);

return 0;
}
