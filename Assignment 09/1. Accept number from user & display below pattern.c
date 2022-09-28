#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
       for(i = iNo; i < 0; i++)
       {
           printf(" * ");
       }
       for(i = iNo; i < 0; i++)
       {
           printf(" # ");
       }
    }
    else
    {
       for(i = 1; i <= iNo; i++)
       {
           printf(" * ");
       }
       for(i = 1; i <= iNo; i++)
       {
           printf(" # ");
       }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter a number = ");
    scanf("%d",&iValue);
    printf("\n");

    Display(iValue);

  return 0;
}
