#include<stdio.h>

int main()
{
    int a  ;
    scanf("%d",&a);

     (a<0)?(printf("%d",(~a)+1)):(printf("%d",a));
    (a<0)?(printf("%d",-(a))):(printf("%d",a));

return 0;
}
