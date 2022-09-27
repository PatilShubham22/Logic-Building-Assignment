#include<stdio.h>

int Factorial(int iNo)
{
    int Fact = 0;

    if(iNo > 0)
    {
         for(Fact = 1; iNo > 0; iNo--)
         {
              Fact = Fact * iNo;
         }
    }
    else if(iNo < 0)
    {
         for(Fact = 1; iNo < 0; iNo++)
         {
              Fact = Fact * iNo;
         }
    }

   return Fact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\n Factorial of %d = %d",iValue, iRet);

  return 0;
}
