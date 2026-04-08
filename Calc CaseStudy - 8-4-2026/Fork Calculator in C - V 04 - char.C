#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int, int);
int Sub(int, int);
int Mult(int, int);
int Div(int, int);
int Mod(int, int);

int main()
{
    char Choice = '\0';
    int No1 = 0, No2 = 0;

    printf("\n ************ Fork Calculator ************ \n");

    printf("\n Choices => \n");
    printf("\n 1. Addition ");
    printf("\n 2. Subtraction ");
    printf("\n 3. Multiplication ");
    printf("\n 4. Division ");
    printf("\n 5. Remainder ");
    printf("\n 6. Exit ");

    printf("\n\n Enter a Choice : ");
    scanf("%c",&Choice);

    fflush(stdin);

    switch(Choice)
    {
        case '1':
                printf("\n Enter 1st Number = ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number = ");
                scanf("%d",&No2);

                printf("\n Addition of => %d + %d = %d.",No1, No2, Add(No1, No2));
                break;

        case '2':
                printf("\n Enter 1st Number = ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number = ");
                scanf("%d",&No2);

                printf("\n Subtraction of => %d - %d = %d.",No1, No2, Sub(No1, No2));
                break;

        case '3':
                printf("\n Enter 1st Number = ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number = ");
                scanf("%d",&No2);

                printf("\n Multiplication of => %d * %d = %d.",No1, No2, Mult(No1, No2));
                break;

        case '4':
                printf("\n Enter 1st Number = ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number = ");
                scanf("%d",&No2);

                printf("\n Division of => %d / %d = %d.",No1, No2, Div(No1, No2));
                break;

        case '5':
                printf("\n Enter 1st Number = ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number = ");
                scanf("%d",&No2);

                printf("\n Remainder of => %d %% %d = %d.",No1, No2, Mod(No1, No2));
                break;

        case '6':
                printf("\n Ok, Have a Good Day");
                break;

        default:
                printf("\n Invalid Choice...");
                break;
    }

    printf("\n\n Thanks For Using Calculator");

    getch();
    return 0;
}

int Add(int N1, int N2)
{
    int  Res = 0;

    Res = N1 + N2;

    return  Res;
}

int Sub(int N1, int N2)
{
    int  Res = 0;

    Res = N1 - N2;

    return  Res;
}

int Mult(int N1, int N2)
{
    int  Res = 0;

    Res = N1 * N2;

    return  Res;
}

int Div(int N1, int N2)
{
    int  Res = 0;

    Res = N1 / N2;

    return  Res;
}

int Mod(int N1, int N2)
{
    int  Res = 0;

    Res = N1 % N2;

    return  Res;
}
