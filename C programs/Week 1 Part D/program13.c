
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int number1 , number2 ;


    printf("enter the number 1: "); // reading the number 1
    scanf("%d",&number1);
    printf("enter the number 2: ");
    scanf("%d",&number2); // reading the number 1

    if ((number1==30 || number2 == 30)|| number1+number2 ==30)
    {
        printf("%d",true);
    }
    else
    {
        printf("%d",false );
    }
return 0;
}
