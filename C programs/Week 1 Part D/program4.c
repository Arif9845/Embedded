#include<stdio.h>
int main ()
{

    int a , b;
    int temp = 0 ;
    printf("enter the value of a :  ");
    scanf("%d", &a );
    printf("\nenter the value of b is : ");
    scanf("%d",&b);
    printf(" Before swap :a = %d, b = %d ", a, b );
     temp = a;
     a= b  ;
     printf("\nAfter swap a value  is : %d ", a );
     b = temp  ;
     printf("\nAfter swap b value is : %d ", b);

return 0;


}
