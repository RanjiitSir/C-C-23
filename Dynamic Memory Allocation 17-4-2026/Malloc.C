#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int i = 0, iCnt = 0, iSum= 0;
        int *iPtr = NULL;

        printf("\n Enter How Many Customers : ");
        scanf("%d",&iCnt);

        iPtr = (int*)malloc(iCnt  * sizeof(int));

        for(i = 0; i < iCnt; i++)
        {
                printf("\n Enter Bill %d : ",i + 501);
                scanf("%d",&iPtr[i]);
        }

        printf("\n\n ==============******============\n\n");
        printf("Entered Bills are =>");

        for(i = 0; i < iCnt; i++)
        {
                iSum = iSum + iPtr[i];
                printf("  %d  ", iPtr[i]);
        }

        free(iPtr);

        printf("\n\n Sum Of Given Numbers is = %d.",iSum);
        printf("\n\n ==============******============\n\n");

        getch();
        return 0;
}
