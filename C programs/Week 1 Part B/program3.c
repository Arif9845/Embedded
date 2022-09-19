#include <stdio.h>

int main()
{
    int Id, hour, salary_per_hr;
    float salary;

    printf("enter the your employment id : ");
    scanf("%d", &Id);

    printf("enter the total worked hours ");
    scanf("%d", &hour);

    printf("enter your salary per hour :");
    scanf("%d", &salary_per_hr);

    salary = hour * salary_per_hr;
    
    printf("Id= %d ", Id);
    printf("\ntotal salary is : %0.2f ", salary);
    return 0;
}