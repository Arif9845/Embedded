// program to find number is odd or even
#include<stdio.h>
int main ()
{

int number ;

printf("enter the number : ");
scanf("%d",&number);

if (number %2==0)// if the remainder is zero then even
    printf("The number is even ");
else
    printf("The number is odd "); // if the remainder is other than zero than odd


return 0;

}
