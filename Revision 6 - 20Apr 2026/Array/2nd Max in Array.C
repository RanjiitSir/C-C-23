/// Accept Array Elements from User & Then Display Maximum All Elements - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 10

int main()
{
    int i = 0, Max = 0, SecMax = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )   /// Accept Array Elements
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);
    }

    for(i = 0 ; i < Size ;  i++ )   /// 1st Max
    {
        if( (i == 0) || (Bill[i] > Max) )
        {
            Max = Bill[i];
        }
    }

    for(i = 0 ; i < Size ;  i++ )   /// 2nd Max
    {
        if(Bill[i] == Max)
        {
            continue;
        }

        if((i == 0) || (Bill[i] > SecMax) )
        {
            SecMax = Bill[i];
        }
    }

    printf("\n\n =============================================================== \n");

    printf("\n 1st Maximum Amount Received Today = %d.", Max);
    printf("\n 2nd Maximum Amount Received Today = %d.", SecMax);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
