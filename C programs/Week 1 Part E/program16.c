#include<stdio.h>

int main()
{
   // formula to find sum of its internal angles 
   // 180(n-2)

   int n;
   printf("enter the no of sides for polygon : ");
   scanf("%d",&n);
   printf("sum of its intenal angle is : %d",180*(n-2));
return 0;
}
// enter the no of sides for polygon : 3
// sum of its intenal angle is : 180