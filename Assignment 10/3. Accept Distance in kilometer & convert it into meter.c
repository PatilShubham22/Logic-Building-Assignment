#include<stdio.h>

int KM_to_Meter(int iNo)
{
  int KM = 0;

  KM = iNo * 1000;

  return KM;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter Distance = ");
    scanf("%d",&iValue);

    iRet = KM_to_Meter(iValue);

    printf("\n After Conversion into meter = %d",iRet);

  return 0;
}
