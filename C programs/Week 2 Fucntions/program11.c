#include<stdio.h>


int myfun()
{
    int a ;
    printf("enter the value of a : ");
    scanf("%d",&a);
    return a;

}

int main()
{
    
int b; 
   b=  myfun();
   printf("the value  is : %d",b);

return 0;
}