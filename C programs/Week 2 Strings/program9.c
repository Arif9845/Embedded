#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int v;

    printf("enter the string  1 : ");
    scanf("%s",str1);
    printf("enter the string 2  : ");
    scanf("%s",str2);
    
  v= strcmp(str2,str1);
   
   printf("the copied string is %d",v);

    

return 0;
}   