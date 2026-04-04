#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};

int main()
{
    int No;
    struct Product P1;

    printf("\n Memory for No is = %d",sizeof(No));
    printf("\n Memory for Double is = %d",sizeof(double));
    printf("\n Memory for Short Integer is = %d",sizeof(short int));

    printf("\n Memory for Our Product Structure is = %d",sizeof(struct Product));

    printf("\n Memory for Our Structure Object is = %d",sizeof(P1));

    getch();
    return 0;
}
