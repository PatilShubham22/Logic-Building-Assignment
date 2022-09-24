#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf(" %d ", i);
    }

    for(i = -1; i >= iNo; i--)
    {
        printf(" %d ", i);
    }
}

int main()
{
    int i = 0, iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    Display(iValue);

  return 0;
}
