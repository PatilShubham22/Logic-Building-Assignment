#include<stdio.h>

int Sum_Non_Fact(int iNo)
{
    int i = 0, Sum = 0;

    for (i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            Sum = Sum + i;
        }
    }

  return Sum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Sum_Non_Fact(iValue);

    printf("\n****************************************************************");
    printf("\n\n\t Summation of all non factors of %d = %d",iValue, iRet);
    printf("\n\n****************************************************************");

  return 0;
}


