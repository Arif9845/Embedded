
#include <stdio.h>

struct s1{
  int a:15;
  float    b:31;
}x;

struct s2{
  int a:31;
  int b:2;
}y;

struct s3{
    int a:32;
    int b:32;
}z;

int main() {

    printf("%d\n", sizeof x);
    printf("%d\n", sizeof y);
    printf("%d\n", sizeof z);


    return 0;
}
