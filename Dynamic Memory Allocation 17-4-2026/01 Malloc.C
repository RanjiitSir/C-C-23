#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Bill_Cnt = 0, i = 0, Bill_Sum = 0;
        int *Bill_Ptr = NULL;

        printf("\n Enter How Many Bills = ");
        scanf("%d",&Bill_Cnt);

        Bill_Ptr = (int*) malloc ( Bill_Cnt * sizeof(int));

        if(Bill_Ptr == NULL)
        {
            printf("\n Malloc Failed");
            return -1;
        }

        /// LOGIC To Accept Bills Calculate Total Bill

        for(i = 0; i < Bill_Cnt; i++)
        {
            printf("\n Enter Bill No %d = ", i+1);
            scanf("%d",&Bill_Ptr[i]);

            Bill_Sum = Bill_Sum + Bill_Ptr[i];
        }

        system("cls");

        printf("\n Given Bills Are => \n");

        for(i = 0; i < Bill_Cnt; i++)
        {
            printf("\n Bill %d = %d.", i+1, Bill_Ptr[i]);
        }

        printf("\n\n Total Of All Given Bills = %d.", Bill_Sum);

        getch();
        return 0;
}
