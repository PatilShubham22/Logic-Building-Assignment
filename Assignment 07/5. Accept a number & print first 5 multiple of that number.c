#include<stdio.h>

void Multiply_Display(int iNo)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf(" %d ",(iNo * i));
    }
}

int main()
{
    int i = 0, iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);
    printf("\n");

    Multiply_Display(iValue);

  return 0;
}

