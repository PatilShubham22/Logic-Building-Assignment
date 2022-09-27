#include<stdio.h>

void Table_Rev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        for(i = 10; i >= 1; i--)
        {
            printf(" %d ",(iNo * i));
        }
    }
    else
    {
        for(i = 10; i >= 1; i--)
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

    Table_Rev(iValue);

  return 0;
}
