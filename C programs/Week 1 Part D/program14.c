
//program to find simple interest
#include<stdio.h>

int main()
{

float  principle ,time,  rate ;
float simple_interest ;

printf("enter the principle  value : ");
scanf("%f",&principle);

printf("\n enter the time in hours  : ");
scanf("%f",&time);

printf("\n enter the rate of interest in: ");
scanf("%f",&rate);

simple_interest = (principle * time * rate)/100; // formula to find simple interest

printf("\n total simple interest value is : %0.0f ", simple_interest);



return 0;
}
