
#include <stdio.h>
int main()
{

    int id, no_units;
    char name;
    float charge = 0;

    printf("enter no of units consumed  : ");
    scanf("%d", &no_units);

    if (no_units > 0)
    {

        if (no_units > 0 && no_units <= 199)
            charge = 1.20 * no_units;

        else if (no_units >= 200 && no_units <= 399)

            charge = (1.20 * 199) + (1.5 * (no_units - 199));

        else if (no_units >= 400 && no_units <= 599)
            charge = (1.20 * 199) + (1.5 * 199) + (1.8 * (no_units - 399));

        else if (no_units >= 600)
            charge = (1.20 * 199) + (1.5 * 199) + (1.8 * 199) + (2 * (no_units - 599));
    }
    if (charge < 100)
    {

        printf("total charge is 100");
    }
    else if (charge > 400)
    {

        printf("%f", charge + (charge * 0.15));
    }
    else
        printf("%f", charge);

    return 0;
}

// output
// enter no of units consumed  : 12
// total charge is 100

// enter no of units consumed  : 123
// 147.600006s
