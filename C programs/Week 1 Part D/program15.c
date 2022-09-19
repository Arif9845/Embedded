
 // program to calculate Compound Interest


#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, Compund_Interest,n ;


    printf("Enter principle : ");
    scanf("%f", &principle);

    printf("Enter time in hours : ");
    scanf("%f", &time);

    printf("Enter rate  : ");
    scanf("%f", &rate);

    printf("Enter no of times interest applied   : ");
    scanf("%f", &n);

    // formula to find compound interest
    Compund_Interest = principle* (pow((1 + rate / 100), (time*n)));
// pow is the function which does exponential value

    printf(" Total Compound Interest = %f", Compund_Interest);

    return 0;
}
