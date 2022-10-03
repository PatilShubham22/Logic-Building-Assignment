#include<stdio.h>

double Square_Meter(int iNo)
{
    double Sq_Meter = 0.0;

    Sq_Meter = iNo * 0.0929;

   return Sq_Meter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("\n Enter area in square feet = ");
    scanf("%d",&iValue);

    dRet = Square_Meter(iValue);

    printf("\n Fahrenheit to Celsius = %lf",dRet);

  return 0;
}
