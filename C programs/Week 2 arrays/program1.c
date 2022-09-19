#include<stdio.h>

int main()
{

    int num,a[100];
    float  average  ,total ; 
    printf("enter  no of  total numbers : ");
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        printf("enter the number %d  : ",i+1);
        scanf("%d",&a[i]);
        total  = total + a[i];


    }
    average = total /num ;
    printf("total average of all the numbers is %f ",average);




return 0;
}