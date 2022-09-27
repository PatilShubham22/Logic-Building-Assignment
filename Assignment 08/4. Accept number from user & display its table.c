#include<stdio.h>

void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        for(i = 1; i <= 10; i++)
        {
            printf(" %d ",(iNo * i));
        }
    }
    else
    {
        for(i = 1; i <= 10; i++)
        {
            printf(" %d ",(iNo * i));
        }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);
    printf("\n");

    Table(iValue);

  return 0;
}

