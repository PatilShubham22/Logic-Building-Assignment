#include<stdio.h>

void Display_Digit(int iNo)
{
    int iDigit = 0, Rev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        Rev = (Rev * 10) + iDigit;
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter a number = ");
    scanf("%d",&iValue);

    Display_Digit(iValue);

  return 0;
}
