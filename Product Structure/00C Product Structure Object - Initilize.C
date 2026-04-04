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
    struct Product P1 = { 15, "Mouce", 0, 125};

    printf("\n Display All Product Members => \n");

    printf("\n Product ID             = %d",P1.P_Id);
    printf("\n Product Name           = %s",P1.P_Name);
    printf("\n Product Sales Price    = %0.2f",P1.P_S_Price);
    printf("\n Product Purchase Price = %0.2f",P1.P_P_Price);

    getch();
    return 0;
}
