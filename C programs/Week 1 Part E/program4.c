#include <stdio.h>

int main()
{
    int maths, science, english, kannada, history, total, pass = 0;
    float average;

    printf("\nenter marks for maths subject : ");
    scanf("%d", &maths);
    printf("\nenter marks for science subject : ");
    scanf("%d", &science);
    printf("\nenter marks for english subject : ");
    scanf("%d", &english);
    printf("\nenter marks for kannada subject : ");
    scanf("%d", &kannada);
    printf("\nenter marks for history subject : ");
    scanf("%d", &history);

    if (maths > 35)
        pass += 1;
    if (science > 35)
        pass += 1;
    if (english > 35)
        pass += 1;
    if (kannada > 35)
        pass += 1;
    if (history > 35)
        pass += 1;

    total = maths + science + english + kannada + history;
    average = (total) / 5;
    printf("\ntotal no of marks : %d", total);
    printf("\naverage no of marks : %0.2f", average);

    if (pass == 5)
    {
        if (average > 90)
        {
            printf("\npassed with Distinction : ");
        }
        else if (average > 60)
        {
            printf("passed with First class : ");
        }
        else if (average >= 30)
        {
            printf("passed with second class : ");
        }
    }
    else
    {
        printf("\nstudent is failed ! ");
    }

    printf("\nNo of subjects passed %d ", pass);
    printf("\nNo of subjects failed %d ", (5 - pass));

    return 0;
}
