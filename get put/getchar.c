#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = 'A';

        printf("\n\nValue of Our character is = %c.\n......... Hello Indians......  \n\n",ch);

        printf("\n Are You Indian????? (Yes/No) = ");

        ch = getchar();

        if(ch == 'y' || ch =='Y')
        {
                    printf("\n\n  WELCOME   DEAR  \n\n");
        }
        else if(ch == 'n' || ch == 'N')
        {
                    printf("\n\n  Bye Bye... \n\n");
        }
        else
        {
                    printf("\n\n Cant Read Your Input???");
        }

        getche();
        return 0;
}
