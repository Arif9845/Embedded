
#include <stdio.h>

int main()
{
    // five brands are there sumsung xiomi oppo LG vivo

    int
        sumsung_s20 = 70000,
        xiomi_note_7_pro = 18000,
        oppo_f21 = 17500,
        LG_s1 = 35000,
        vivo_v9 = 10000,
        Iphone_11 = 57000;

    int range1, range2;
    printf("enter the first range : ");
    scanf("%d", &range1);
    printf("enter the  second range : ");
    scanf("%d", &range2);

    printf("list of mobiles under the range  are :\n ");

    if (range1 <= sumsung_s20 && range2 >= sumsung_s20)
        printf("\nsumsung s20 is available  with a price of %d ", sumsung_s20);
    if (range1 <= xiomi_note_7_pro && range2 >= xiomi_note_7_pro)
        printf("\nxiomi note 7 pro is available  with a price of %d ", xiomi_note_7_pro);
    if (range1 <= oppo_f21 && range2 >= oppo_f21)
        printf("\noppo f21 is available with a price of  %d ", oppo_f21);
    if (range1 <= LG_s1 && range2 >= LG_s1)
        printf("\nLG s1 is available with a price of  %d ", LG_s1);
    if (range1 <= vivo_v9 && range2 >= vivo_v9)
        printf("\nvivo v9 is available  with a price of %d ", vivo_v9);
    if (range1 <= Iphone_11 && range2 >= Iphone_11)
        printf("\nIphone 11  is available with a price of  %d ", Iphone_11);

    return 0;
}