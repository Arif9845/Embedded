#include<stdio.h>
int add(int x , int y)
{
    return x +y;
}
int main()
{
    int a =10,b=20;
    int result;
    result = add( a,b);
    printf("%d",result );
return 0;
}