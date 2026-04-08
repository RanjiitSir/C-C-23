#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float Add(float, float);
float Sub(float, float);
float Mult(float, float);
float Div(float, float);

int main()
{
    char Opr = '\0';
    float No1 = 0, No2 = 0;

    printf("\n\n Enter an Operation (+, - , *, /) : ");
    scanf("%c",&Opr);       /// Opr = getche();

    fflush(stdin);

    printf("\n Enter 1st Number = ");
    scanf("%f",&No1);
    printf("\n Enter 2nd Number = ");
    scanf("%f",&No2);

    switch(Opr)
    {
        case '+':
                printf("\n Addition of => %f + %f = %f.",No1, No2, Add(No1, No2));
                break;

        case '-':
                printf("\n Subtraction of => %f - %f = %f.",No1, No2, Sub(No1, No2));
                break;

        case '*':
                printf("\n Multiplication of => %f * %f = %f.",No1, No2, Mult(No1, No2));
                break;

        case '/':
                printf("\n Division of => %f / %f = %f.",No1, No2, Div(No1, No2));
                break;

        default:
                printf("\n Invalid Symbol or Operation..");
                break;
    }

    printf("\n\n Thanks For Using Calculator");

    getch();
    return 0;
}

float Add(float N1, float N2)
{
    float  Res = 0;

    Res = N1 + N2;

    return  Res;
}

float Sub(float N1, float N2)
{
    float  Res = 0;

    Res = N1 - N2;

    return  Res;
}

float Mult(float N1, float N2)
{
    float  Res = 0;

    Res = N1 * N2;

    return  Res;
}

float Div(float N1, float N2)
{
    float  Res = 0;

    Res = N1 / N2;

    return  Res;
}
