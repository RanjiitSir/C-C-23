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
    struct Product P1 = { 15, "Mouce", 100, 125};
    struct Product P2 = { 0, "", 0.0, 0.0};
    struct Product P3 = {};

    printf("\n Display 1st Product Members => \n");

    printf("\n Product ID             = %d",P1.P_Id);
    printf("\n Product Name           = %s",P1.P_Name);
    printf("\n Product Sales Price    = %0.2f",P1.P_S_Price);
    printf("\n Product Purchase Price = %0.2f",P1.P_P_Price);

    printf("\n\n Display 2nd Product Members => \n");

    printf("\n Product ID             = %d",P2.P_Id);
    printf("\n Product Name           = %s",P2.P_Name);
    printf("\n Product Sales Price    = %0.2f",P2.P_S_Price);
    printf("\n Product Purchase Price = %0.2f",P2.P_P_Price);

    printf("\n\n Display 3rd Product Members => \n");

    printf("\n Product ID             = %d",P3.P_Id);
    printf("\n Product Name           = %s",P3.P_Name);
    printf("\n Product Sales Price    = %0.2f",P3.P_S_Price);
    printf("\n Product Purchase Price = %0.2f",P3.P_P_Price);

    getch();
    return 0;
}
