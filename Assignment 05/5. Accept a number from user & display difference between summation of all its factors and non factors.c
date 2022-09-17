#include<stdio.h>

int Fact_Diff(int iNo)
{
    int i = 0, Sum = 0, Sum1 = 0, Sum2 = 0;

    for (i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            Sum2 = Sum2 + i;
        }
        if(iNo % i == 0)
        {
           Sum1 = Sum1 + i;
        }
    }

    Sum = Sum1 - Sum2;

    return Sum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Fact_Diff(iValue);

    printf("\n****************************************************************");
    printf("\n\n\t Summation of all non factors of %d = %d",iValue, iRet);
    printf("\n\n****************************************************************");

  return 0;
}


