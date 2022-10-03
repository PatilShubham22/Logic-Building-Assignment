#include<stdio.h>

double FH_to_Cs(float Temp)
{
    double Cs = 0.0;

    Cs = (Temp - 32) * (5/9);

   return Cs;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter temperature in Fahrenheit = ");
    scanf("%f",&fValue);

    dRet = FH_to_Cs(fValue);

    printf("\n Fahrenheit to Celsius = %lf",dRet);

  return 0;
}
