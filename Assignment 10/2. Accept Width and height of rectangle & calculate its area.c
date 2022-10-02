#include<stdio.h>

double Rect_Area(float fValue1, float fValue2)
{
    double Area = 0.0;

    Area = fValue1 * fValue2;

    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("\n Enter width = ");
    scanf("%f",&fValue1);

    printf("\n Enter height = ");
    scanf("%f",&fValue2);

    dRet = Rect_Area(fValue1,fValue2);

    printf("\n Area of rectangle = %.3lf",dRet);

  return 0;
}
