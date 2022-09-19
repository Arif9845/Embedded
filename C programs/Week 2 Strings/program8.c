#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("enter the string  1 : ");
    scanf("%s",str1);
    printf("enter the string 2  : ");
    scanf("%s",str2);
    

   
   printf("the copied string is %s",strcat(str2,str1));

    

return 0;
}   