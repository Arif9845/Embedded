#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("enter the string  1 : ");
    scanf("%s",str1);
    

   strcpy(str2,str1);
   printf(" %s",str2);

    

return 0;
}   