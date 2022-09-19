#include <stdio.h>
#include <string.h>

int main()
{
    char day_no;
    printf("enter the day number  :");
    scanf("%c", &day_no);

    switch (day_no)

    {
    case '1':
        printf("Monday");
        break;
    case '2':
        printf("Tuesday");
        break;
    case '3':
        printf("Wedensday");
        break;
    case '4':
        printf("Thursday");
        break;
    case '5':
        printf("Friday");
        break;
    case '6':
        printf("Saturaday");
        break;
    case '7':
        printf("Sunday");
        break;

    default:
        printf("Enter a valid Number");
        break;
    }
    return 0;
}