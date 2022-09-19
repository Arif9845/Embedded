    #include <stdio.h>  
    #include <string.h>  
       
    int main()  
    {  
        char string[100] ;
        char ch ;  
          

          printf("enter the string : ");
          scanf("%[^\n]s",string);
          printf("enter the character : ");
          scanf(" %c",&ch);

        //Replace space with specific character ch  
        for(int i = 0; i < strlen(string); i++){  
            if(string[i] == ' ')  
                string[i] = ch;  
        }  
          
        printf("String after replacing spaces with given character: \n");  
        printf("%s", string);  
              
        return 0;  
    }  