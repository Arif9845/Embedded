#include <stdio.h>

char  myfun(char name[100]  )
{
    printf("hi good morning %s",name );
}

int main()
{

    char name[100];
    printf("enter your name : ");
    scanf("%[^\n]s",name);
    myfun(name);
    
    return 0;
}