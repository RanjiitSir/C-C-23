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
    char Opr = '\0';
    int No1 = 0, No2 = 0;

    printf("\n\n Enter an Operation (+, - , *, /, %%) : ");
    scanf("%c",&Opr);

    fflush(stdin);

    printf("\n Enter 1st Number = ");
    scanf("%d",&No1);
    printf("\n Enter 2nd Number = ");
    scanf("%d",&No2);

    switch(Opr)
    {
        case '+':
                printf("\n Addition of => %d + %d = %d.",No1, No2, Add(No1, No2));
                break;

        case '-':
                printf("\n Subtraction of => %d - %d = %d.",No1, No2, Sub(No1, No2));
                break;

        case '*':
                printf("\n Multiplication of => %d * %d = %d.",No1, No2, Mult(No1, No2));
                break;

        case '/':
                printf("\n Division of => %d / %d = %d.",No1, No2, Div(No1, No2));
                break;

        case '%':
                printf("\n Remainder of => %d %% %d = %d.",No1, No2, Mod(No1, No2));
                break;

        default:
                printf("\n Invalid Symbol or Operation..");
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
