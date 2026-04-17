#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n Pattern is => \n\n");

    for(i = 1; i <= 7 ; i++)    /// Row Traversal
    {
        for(j = 1; j <= 6 ; j++)    /// Column Traversal
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
