#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int length,spa ,sc;
    int vowel =0 ,consonant =0,space =0;
    printf("enter the string :");
    scanf("%[^\n]s",&a);

    length=strlen(a);
    for (int i =0;i<=length;i++)
    {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U')
        {
            vowel +=1;
        }

        if (a[i]>='a'&& a[i]<='z' || a[i]>='A'&& a[i]<='Z' )
        {
            consonant +=1;
        }

        if (a[i]==' ')
         space +=1;

    }

    printf("%d",length);
    spa = length-(vowel+(consonant-vowel) );

    sc= length -(space+consonant);
    printf("\ntotal no of vowels in a string is %d ", vowel);
    printf("\ntotal no of consonant in a string is %d ", (consonant-vowel));
    printf("\ntotal no of space in a string is %d ",spa);
    printf("\ntotal no of special characters  in a string is %d ",sc);
return 0;
}
