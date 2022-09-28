#include<stdio.h>

int Even_Factor(int iNo)
{
    int Fact = 0;

    for(Fact = 1; iNo > 0; iNo--)
    {
        if(iNo % 2 == 0)
        {
            Fact = Fact * iNo;
        }
    }
    if(iNo < 0)
    {
        for(Fact = 1; iNo < 0; iNo++)
        {
           if(iNo % 2 == 0)
           {
               Fact = Fact * iNo;
           }
        }
    }

  return Fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    iRet = Even_Factor(iValue);

    printf("\n***************************************************");
    printf("\n\n Even factorial of number %d = %d",iValue ,iRet);
    printf("\n\n***************************************************");
  return 0;
}
