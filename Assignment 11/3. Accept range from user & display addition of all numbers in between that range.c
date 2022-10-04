#include<stdio.h>

int Range_Sum(int iNo1, int iNo2)
{
    int i = 0, Sum = 0;

    if(iNo1 > 0)
    {
        for(i = iNo1; i <= iNo2; i++)
        {
            Sum = Sum + i;
        }
    }
    else if(iNo1 < 0 || iNo1 > iNo2)
    {
        printf("\n Invalid Range");
    }

  return Sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("\n Enter first number = ");
    scanf("%d",&iValue1);

    printf("\n Enter Last number = ");
    scanf("%d",&iValue2);

    iRet = Range_Sum(iValue1,iValue2);

    printf("\n Addition is = %d",iRet);

  return 0;
}
