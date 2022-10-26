#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf(" %d ",i);
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter number of elements = ");
    scanf("%d",&iValue);

    Pattern(iValue);

  return 0;
}
