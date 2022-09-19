 // program to check multiple of 3 and 7

#include<stdio.h>
int main ()
{

int number ,c;

printf("enter the number : ");
scanf("%d",&number);

 c = (number % 3 ==0 ) || (number % 7 ==0);
 (c==1)?(printf("The number is either multiple of 3 or 7 ")):(printf("The number is neither multiple of 3 or 7"));




    return 0;


}
