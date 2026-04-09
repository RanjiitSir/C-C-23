#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("\n Value of character = %c.\n\n",ch);

    printf("\n Enter New Character Value : ");

    ch = getchar();

    printf("\n\n New Value of Character = %c.\n",ch);

    printf("\n Thanks for Using Our App.\n Press a Key To Exit.");

    getch();
    return 0;
}
