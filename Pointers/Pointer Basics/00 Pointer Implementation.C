#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 21;
    int  *iP = &No;

    printf("\n Value of No = %d", No);
    printf("\n Address of No = %d",&No);

    getch();

    printf("\n Value of No Using its Pointer iP = %d",*iP);
    printf("\n Address Of iNo Using iP = %d", iP);
    printf("\n Address Of iP = %d", &iP);

    getch();
    return 0;
}
