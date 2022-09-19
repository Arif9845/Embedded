
#include<stdio.h>
int main ()
{
int number  , inc1, dec1;
printf("enter the number : ");
scanf("%d",&number) ;
inc1 = number++;
printf("\nThe post incremented number is : %d",inc1);
dec1 = number--;
printf("\n post decremented number is : %d ", dec1);
printf("\nthe final value of number is = %d",number );


}
