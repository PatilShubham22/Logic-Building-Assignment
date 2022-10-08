#include<stdio.h>

#define True 1
#define False 2

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            return True;
        }
        else
        {
            return False;
        }
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter Number = ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == True)
    {
        printf("\n it Contains Zero");
    }
    else
    {
        printf("\n There is No Zero");
    }
  return 0;
}
