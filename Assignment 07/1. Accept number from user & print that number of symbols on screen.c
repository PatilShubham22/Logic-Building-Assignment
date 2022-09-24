#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf(" $ ");
        printf(" * ");
    }

    for(i = 0; i > iNo; i--)
    {
        printf(" $ ");
        printf(" * ");
    }
}

int main()
{
    int i = 0, iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    Pattern(iValue);

  return 0;
}
