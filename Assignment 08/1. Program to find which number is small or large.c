#include<stdio.h>

void Number(int iNo)
{
     if(iNo <= 50)
    {
        printf("\n Small");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("\n Medium");
    }
    else
    {
        printf("\n Large");
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&iValue);

    Number(iValue);

  return 0;
}
