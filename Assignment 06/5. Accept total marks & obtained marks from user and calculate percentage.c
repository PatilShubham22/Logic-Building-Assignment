#include<stdio.h>

float Percentage(int iNo, int iNo1)
{
    float Per = 0.0;

    Per = iNo * 100;
    Per = Per / iNo1;

  return Per;
}

int main()
{
    int iValue = 0, iValue1 = 0;
    float fRet = 0;

    printf("\n Enter Obtained Marks = ");
    scanf("%d",&iValue);

    printf("\n Enter Total Marks = ");
    scanf("%d",&iValue1);

    fRet = Percentage(iValue, iValue1);

    printf("\n %.1f%%",fRet);

    return 0;
}
