#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("\n Character Stored is = %c.\n", ch);

    ch = getch();

    printf("\n Entered Character is = %c.\n", ch);

    ch = getche();

    printf("\n Entered Character is = %c.\n", ch);

    ch = getchar();

    printf("\n Entered Character is = %c.\n", ch);

    printf("\n Thanks");

    getch();
    return 0;
}
