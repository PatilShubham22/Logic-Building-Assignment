#include<stdio.h>

float Calculate_Bill(int iAmount)
{
    float Bill  = 0;
    int Temp = 0;

    Temp = iAmount;

    if(iAmount <= 500)
    {
        Bill = iAmount;
    }
    else if(iAmount > 500 && iAmount <=1500)
    {
        Temp = Temp / 100;
        Bill = Temp * 10;
        Bill = iAmount - Bill;
    }
    else if(iAmount > 1500)
    {
        Temp = Temp / 100;
        Bill = Temp * 15;
        Bill = iAmount - Bill;
    }

  return Bill;

}

int main()
{
    int Amount = 0;

    printf("\n Enter Bill Amount = ");
    scanf("%d",&Amount);

    printf("\n Bill Amount after Discount = %-.2f",Calculate_Bill(Amount));

    return 0;
}
