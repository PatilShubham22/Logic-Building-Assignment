#include<stdio.h>

int Dollar_INR(int iNo)
{
    int Total = 0;

    Total = iNo * 70;

    return Total;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter number of USD = ");
    scanf("%d",&iValue);

    iRet = Dollar_INR(iValue);

    printf("\n Value in INR is = %d",iRet);

   return 0;
}
