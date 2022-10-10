#include<stdio.h>

int Count_Two(int iNo)
{
    int Cnt = 0, Digit = 0;

    while(iNo > 0)
    {
        Digit = iNo % 10;
        iNo = iNo / 10;

        if(Digit < 6)
        {
            Cnt++;
        }
    }
    return Cnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number = ");
    scanf("%d",&iValue);

    iRet = Count_Two(iValue);

    printf("\n %d",iRet);

  return 0;
}
