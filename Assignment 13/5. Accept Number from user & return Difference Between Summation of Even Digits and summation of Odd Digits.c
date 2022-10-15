#include<stdio.h>

int Count_Diff(int iNo)
{
    int Diff = 0, Digit = 0, Even = 0, Odd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Digit = iNo % 10;
        iNo = iNo / 10;

        if(Digit % 2 == 0)
        {
            Even = Even + Digit;
        }
        if(Digit % 2 != 0)
        {
            Odd = Odd + Digit;
        }
        Diff = Even - Odd;
    }
    return Diff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Count_Diff(iValue);

    printf("\n %d",iRet);

   return 0;
}
