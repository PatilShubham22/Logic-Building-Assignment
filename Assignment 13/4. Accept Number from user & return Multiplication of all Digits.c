#include<stdio.h>

int Mult_Digits(int iNo)
{
    int Mult = 1,Digit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Digit = iNo % 10;
        iNo = iNo / 10;

        if(Digit == 0)
        {
            Digit = 1;
        }

        Mult = Mult * Digit;
    }
    return Mult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Mult_Digits(iValue);

    printf("\n %d",iRet);

   return 0;
}
