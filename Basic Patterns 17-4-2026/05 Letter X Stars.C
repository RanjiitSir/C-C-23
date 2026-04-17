#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0;

    printf("\n Enter Row Column Size : ");
    scanf("%d",&RC);        /// 7

    printf("\n Pattern is => \n\n");

    for(i = 1; i <= RC ; i++)    /// Row Traversal
    {
        for(j = 1; j <= RC ; j++)    /// Column Traversal
        {
            if((i == j) || ( i+j == RC+1 ))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
