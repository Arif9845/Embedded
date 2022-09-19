#include<stdio.h>

int main()
{
    char c ;
    printf("enter the character : ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("The  char is vowel ");   // vowel is printed
    }
    else
    printf("It is not vowel ");

return 0;
}
