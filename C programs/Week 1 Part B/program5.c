#include <stdio.h>
int main()
{
    int dc;
    float f = 2.77;
    char xy = 'arif';
    long v = 355557;
    unsigned long d = 7877878;
    double s=234;

    printf("Size of int: %d bytes\n", sizeof(dc));
    printf("Size of float: %d bytes\n", sizeof(f));
    printf("Size of char: %d byte\n", sizeof(xy));
    printf("Size of long : %d byte\n", sizeof(v));
    printf("Size of unsigned long : %d byte\n", sizeof(d));
    printf("Size of double : %d byte\n", sizeof(s));

    return 0;
}