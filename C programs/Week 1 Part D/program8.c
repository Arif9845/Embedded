// program to convert celsius to fahrenheit

#include<stdio.h>
int main ()
{
float celsius, fahrenheit  ;

printf("enter the celsius value : ");
scanf("%f",&celsius);

fahrenheit = ((celsius *(1.8)) +32); //This is formula to convert celsius to fahrenheit

printf("The equivalent fahrenheit value is : %0.2f", fahrenheit);



return 0;

}
