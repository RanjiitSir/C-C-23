#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int iCnt = 0, iSum= 0;
        int *iPtr = NULL;

        printf("\n Enter How Many Customers : ");
        scanf("%d",&iCnt);  /// 5

        iPtr = (int*)calloc(iCnt , sizeof(int));

        if(iPtr == NULL)
        {
            printf("\n Memory Allocation Failed!!!");
            return -1;
        }

        for(int i = 0; i < iCnt; i++)
        {
                printf("\n Enter Bill %d : ",i + 501);
                scanf("%d",&iPtr[i]);
        }

        system("cls");

        printf("\n\n ==============******============\n\n");
        printf(" Sum Of Entered Bills => ");

        for(int i = 0; i < iCnt; i++)
        {
                iSum = iSum + iPtr[i];
                printf(" %d +", iPtr[i]);
        }

        printf("\b = %d.",iSum);
        printf("\n\n ==============******============\n\n");
        free(iPtr);

        getch();
        return 0;
}
