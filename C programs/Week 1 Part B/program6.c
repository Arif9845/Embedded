#include <stdio.h>

int main()
{
    int a;
    float b;
    char v;
    printf("enter a character : ");
    scanf("%c", &v);
    printf("enter a integer : \n ");
    scanf("%d", &a);
    printf("enter a floating value : ");
    scanf("\n%f", &b);

    printf("%c\n", v);
    printf("%d\n", a);
    printf("%f\n", b);
    

    return 0;
}