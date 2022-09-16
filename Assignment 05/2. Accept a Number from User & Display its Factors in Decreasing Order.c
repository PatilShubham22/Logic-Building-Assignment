#include<stdio.h>

void Fact_rev(int iNo)
{
    int i = 0;

     for(i = iNo - 1; i >= 1; i--)
    {
        if(iNo % i == 0)
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

    Fact_rev(iValue);

  return 0;
}
