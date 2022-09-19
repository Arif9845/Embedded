#include<stdio.h>
#include<string.h>
int string_l, ctr;
int main()
{
    char a[100];
    printf("enter the string :");

    // for (int  i =0;i<=100;i++)
    // {
    //     scanf("%c",&a[i]);
    // }
    scanf("%[^\n]s",a);
    for ( ctr=0; ; ctr++){
        char checkcar= a[ctr];
        if (checkcar=='\0'){
            break;
        }
    
    }
    printf("last char is %c", a[ctr-1]);
return 0;
}