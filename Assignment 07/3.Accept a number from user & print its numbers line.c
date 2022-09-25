#include<stdio.h>

void Display(int iNo)
{
    int i = 0;


    if(iNo < 0)
    {
       for(i = iNo; i <= iNo * (-2) + (iNo); i++)
       {
          printf(" %d ",i);
       }
    }
    else
    {
    iNo = -iNo;

       for(i = iNo; i <= iNo * (-2) + (iNo); i++)
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

    Display(iValue);

  return 0;
}
