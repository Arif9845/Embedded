#include<stdio.h>
int main ()
{

    int a = 8, b = 3;
    int c,d,e,g;
    float f ;

    c = a + b ;
    d = a - b ;
    e = a * b ;
    f =  (float )a / b;
    g = a % b;


    printf("addition value is  : %d   ", c);
    printf(" \n subtraction value is : %d   ", d);
    printf(" \n multiplication value is :  %d   ", e);
    printf("\n Division  value is  : %0.2f   ", f);
    printf("\n remainder value is  : %d   ", g);


return 0;

}

