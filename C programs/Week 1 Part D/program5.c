// swaping of two numbers without using 3rd variable
#include<stdio.h>
int main ()
{

    int a , b;

    printf("enter the value of a :  ");
    scanf("%d", &a );
    printf("\nenter the value of b is : ");
    scanf("%d",&b);
    printf(" Before swap :a = %d, b = %d ", a, b ); //
     a+=b; // suppose a = 50 ,b =20 resulting a= 70
     b= a-b ; // by substracting a-b we swaped value  of a to b
     a-=b; // from this b value is swaped to a
     printf("\nAfter swap a value  is : %d ", a );

     printf("\nAfter swap b value is : %d ", b);

return 0;

}
