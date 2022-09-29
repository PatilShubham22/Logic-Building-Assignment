#include<stdio.h>

int Factorial_Diff(int iNo)
{
    int iNo2 = 0, Fact1 = 0, Fact2 = 0, Fact3 = 0;

    iNo2 = iNo;

        for(Fact1 = 1; iNo > 0; iNo--)
        {
          if(iNo % 2 == 0)
          {
             Fact1 = Fact1 * iNo;
          }
        }
        for(Fact2 = 1; iNo2 > 0; iNo2--)
        {
           if(iNo2 % 2 != 0)
            {
              Fact2 = Fact2 * iNo2;
            }
        }

    if(iNo < 0)
    {
        for(Fact1 = 1; iNo < 0; iNo++)
        {
           if(iNo % 2 == 0)
           {
               Fact1 = Fact1 * iNo;
           }
        }
        for(Fact2 = 1; iNo2 < 0; iNo2++)
        {
           if(iNo2 % 2 != 0)
           {
              Fact2 = Fact2 * iNo2;
           }
        }
    }

    Fact3 = Fact1 - Fact2;

  return Fact3;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Factorial_Diff(iValue);

    printf("\n***************************************************");
    printf("\n\n Factorial difference = %d",iRet);
    printf("\n\n***************************************************");
  return 0;
}
