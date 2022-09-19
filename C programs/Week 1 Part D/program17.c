
#include <stdio.h>


int main()
{

int a ,b , c ,d,e ;

printf("enter the value for 'A' variable :  ");
scanf("%d", &a );

printf("enter the value for 'B' variable : ");
scanf("%d", &b );

// performing bitwise operations on variable a and b 

c = a & b;
d = a | b;
e = a ^ b;
printf("\n value for bitwise operator '&'used   : = %d ", c); 
printf("\n value for bitwise operator '|'used  : = %d ", d); 
printf("\n value for bitwise operator '^'used  : = %d ", e); 

// unary opeartion on variable a 
printf("\n");
printf("\n  unary opeartion on A\n ");
printf("\n value for bitwise operator '~'used   : = %d ", ~a); 
printf("\n value for bitwise operator '<<'used   : = %d ", a<<2); 
printf("\n value for bitwise operator '>>'used   : = %d ", a>>2); 

    return 0;
}
