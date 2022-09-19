#include<stdio.h>
#include<math.h>
int main ()
{

    float num  = 5.34;
    int a; 
     a = num < 0 ? num - 0.5 : num + 0.5;

    printf("%d",a);
return 0;

}
// # include<stdio.h>
  
// int roundNo(float num)
// {
//     return num < 0 ? num - 0.5 : num + 0.5;
// }
  
// int main()
// {
//     printf("%d", roundNo(1.477));
    
// }
