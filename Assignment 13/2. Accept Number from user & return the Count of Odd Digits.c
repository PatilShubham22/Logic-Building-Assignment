#include<stdio.h>

int Count_Odd(int iNo)
{
    int Cnt = 0,Digit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Digit = iNo % 10;
        iNo = iNo / 10;

        if(Digit % 2 != 0)
        {
            Cnt++;
        }
    }
    return Cnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Count_Odd(iValue);

    printf("\n %d",iRet);

   return 0;
}
