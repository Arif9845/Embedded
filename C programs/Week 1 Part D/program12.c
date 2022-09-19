 // program to use of bitwise operators 

#include<stdio.h>
int main ()
{

 int a= 5, b= 5, c= 10;
 // == operator between a, b and c
 printf("\n The value  is = %d  when  '=='used  between a and b  ",a==b); // returns 1
 printf("\n The value  is = %d  when  '=='used  between b and c  ",b==c); // returns 0
 printf("\n The value  is = %d  when  '=='used  between a and c  ",a==c); // returns 0
//  < operator between a, b and c
 printf("\n The value  is = %d  when  '<' used  between a and b  ",a<b); // returns 0
 printf("\n The value  is = %d  when  '<' used  between b and c  ",b<c);// returns 1
 printf("\n The value  is = %d  when  '<' used  between a and c  ",a<c);// returns 1
//  > operator between a, b and c
 printf("\n The value  is = %d  when  '>' used  between a and b  ",a>b); //returns 0
 printf("\n The value  is = %d  when  '>' used  between b and c  ",b>c);//returns 0
 printf("\n The value  is = %d  when  '>' used  between a and c  ",a>c);//returns 0
//  <= operator between a, b and c
 printf("\n The value  is = %d  when  '<='used  between a and b  ",a<=b);//returns 1
 printf("\n The value  is = %d  when  '<='used  between b and c  ",b<=c);//returns 1
 printf("\n The value  is = %d  when  '<='used  between a and c  ",a<=c);//returns 1
//  >= operator between a, b and c
 printf("\n The value  is = %d  when  '>='used  between a and b  ",a>=b);//returns 1
 printf("\n The value  is = %d  when  '>='used  between b and c  ",b>=c);// return 0
 printf("\n The value  is = %d  when  '>='used  between a and c  ",a>=c); //returns 0
//  != operator between a, b and c
 printf("\n The value  is = %d  when  '!='used  between a and b  ",a!=b);//returns 0
 printf("\n The value  is = %d  when  '!='used  between b and c  ",b!=c); //returns 1
 printf("\n The value  is = %d  when  '!='used  between a and c  ",a!=c); //returns 1
return 0;


}

