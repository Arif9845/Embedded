#include<stdio.h>
void swap (int *a,int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
int main()
{
    
int x,y;
printf("enter the number 1 : ");
scanf("%d",&x); //10
printf("enter the number 2 : ");
scanf("%d",&y);//20

swap(&x,&y);
printf("after swaping : x =%d ,y=%d ",x,y);

return 0;
}