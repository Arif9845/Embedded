#include <stdio.h>

int main() {
   int year;
   printf("enter the year : ");
   scanf("%d",&year);



   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
   {
        printf("%d is not a leap year", year);
        printf("\n%d is  next leap year ", year+(4-(year%4)));
    
   }
      

   return 0;
}

// output :
// enter the year : 2001
// 2001 is not a leap year
//  2004 is  next leap year