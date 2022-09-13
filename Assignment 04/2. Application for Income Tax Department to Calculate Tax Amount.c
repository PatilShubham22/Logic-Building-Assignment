#include<stdio.h>

float Income_Tax(int iAmount)
{
    float Tax = 0.0, Tax1 = 0.0, Tax2 = 0.0;

    if(iAmount >= 500000 && iAmount < 1000000)
    {
        Tax = ((iAmount - 500000)* 10) / 100;
    }
    else if(iAmount >= 1000000 && iAmount <= 2000000)
    {
        Tax = ((iAmount - 1000000)* 20) / 100;;
        Tax1 = (500000 * 10) / 100;
        Tax = Tax1 + Tax;
    }
    else if(iAmount > 2000000)
    {
        Tax = ((iAmount - 2000000) * 30) / 100;
        Tax2 = (1000000 * 20) / 100;
        Tax1 = (500000 * 10) / 100;
        Tax = Tax2 + Tax1 + Tax;
    }
    else
    {
        printf("\n There is No Income Tax for Amount Below 500000");
    }
    return Tax;
}

int main()
{
    int Amount = 0;

    printf("\n Enter Your Gross Income = ");
    scanf("%d",&Amount);

    printf("\n ************************************************");
    printf("\n\n\t Your Tax Amount is = %-.2f/-",Income_Tax(Amount));
    printf("\n\n ************************************************");
  return 0;
}
