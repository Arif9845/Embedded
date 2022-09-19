


#include <stdio.h>


int main()
{

int a =5, b=5, c=10;
printf("\n Both a and b are greater than c     = %d : ", ((a>c)&& (b>c))) ;
printf("\n Both a and b are smaller  than c    = %d : ", ((a<c)&& (b<c))) ;
printf("\n Either  a and b are greater than c  = %d : ", ((a<c)||  (b<c))) ;
printf("\n Either  a and b are equal  than c   = %d : ", ((a==c)&& (b==c))) ;

    return 0;
}
