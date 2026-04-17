//  Accept Array & Display All Elements with Loop
//  Summation of All Elements in Given Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void  Accept_Elements(int*,int);
void  Display_Elements(int*,int);
int  Sum_Of_Elements(int*,int);

int main()
{
            int  Cnt = 0, Sum = 0;

            printf("\n Enter How Many Elements Do You Have = ");
            scanf("%d", &Cnt);

            int  *iPtr = (int*)malloc(sizeof(int) * Cnt);

            Accept_Elements(iPtr, Cnt);

            system("cls");

            Display_Elements(iPtr, Cnt);

            getch();

            Sum = Sum_Of_Elements(iPtr, Cnt);

            printf("\n OUTPUT : Sum of  All Elements in Given Array is  = %d.", Sum );

            getch();
            return 0;
}

int  Sum_Of_Elements(int  *Arr, int  Size)
{
            int  i = 0, Sum = 0;

            for(i = 0; i < Size; i++)
            {
                        Sum = Sum + Arr[i];
            }

            return  Sum;
}

void  Accept_Elements(int  *Arr, int  Size)
{
            int  i = 0;

            printf("\n Enter Bills Amount => \n");

            for(i = 0; i < Size; i++)
            {
                    printf("\n Enter Amount %d = ", i+1);
                    scanf("%d", &Arr[i]);
            }

            return;
}

void  Display_Elements(int  *Fun, int  Size)
{
            int  i = 0;

            printf("\n ===============********===============\n");
            printf("\n Elements in Given Array are => \n");

            for(i = 0; i < Size; i++)
            {
                        printf("\n Value of Element %d = %d .",i +1, Fun[i]);
            }

            printf("\n ===============********===============\n");

            return;
}
