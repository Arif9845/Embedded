
#include<stdio.h>

void  myfun(char  name2[100])
{


    printf("hello %s",name2);


}

int main()
{
    char name[100];
    printf("enter your name : ");
    scanf("%[^\n]s",name);
    myfun(name);


return 0;
}
