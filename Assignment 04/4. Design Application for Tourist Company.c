/// Application for Tourist Company

#include<stdio.h>

int Tourist_Bill(int iKilometer)
{
    int Rent = 0;

    if(iKilometer > 0)
    {
        if(iKilometer > 100)
        {
            Rent = (iKilometer - 100) * 15;
            iKilometer = 100;
        }
        Rent = Rent + iKilometer * 25;
    }
    else
    {
        printf("\n Invalid Input");
    }

    return Rent;
}

int main()
{
    int Kilometer = 0;

    printf("\n How many kilometer the Car run = ");
    scanf("%d",&Kilometer);

    printf("\n Your Estimated Rent is = %d",Tourist_Bill(Kilometer));

    return 0;
}
