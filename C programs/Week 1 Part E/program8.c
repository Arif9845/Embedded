#include <stdio.h>

int main()
{
    int centi;
    printf("enter the temperature  in centigrade : ");
    scanf("%d", &centi);
    if (centi < 0)
        printf("Freezing weather ");
    else if (centi < 10)
        printf("very cold  weather");
    else if (centi < 20)
        printf(" cold  weather");
    else if (centi < 30)
        printf(" normal in temperature");
    else if (centi < 40)
        printf("  Its Hot");
    else if (centi >= 40)
        printf("its very Hot ");
    return 0;
}
// output 1
// enter the temperature  in centigrade : 23
//  normal in temperature

// output 2
// enter the temperature  in centigrade : 45
// its very Hot