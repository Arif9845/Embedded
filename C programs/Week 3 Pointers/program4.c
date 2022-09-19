#include<stdio.h>
int max (int *x , int *y)
{
    if (*x>*y)
        return *x;
    else 
        return *y;
}
int main()
{
    int a =10,b=20;
    int result;
    result = max( &a,&b);
    printf(" greater number is %d",result );
return 0;
}