#include<stdio.h>

void Odd_Display(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 1)
        {
            printf(" %d ",i);
        }
    }
}

int main()
{
    int i = 0, iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    Odd_Display(iValue);

  return 0;
}

