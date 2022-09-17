#include<stdio.h>

int Non_Fact(int iNo)
{
    int i = 0, Sum = 0;

    for (i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf(" %d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);
    printf("\n");

    Non_Fact(iValue);

  return 0;
}

