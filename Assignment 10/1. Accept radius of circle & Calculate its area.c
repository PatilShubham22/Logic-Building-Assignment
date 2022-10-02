#include<stdio.h>

double Circle_Area(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter Radius = ");
    scanf("%f",&fValue);

    dRet = Circle_Area(fValue);

    printf("\n Area = %lf",dRet);

  return 0;
}
