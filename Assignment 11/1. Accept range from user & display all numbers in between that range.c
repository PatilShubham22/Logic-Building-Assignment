#include<stdio.h>

void Range_Display(int iNo1, int iNo2)
{
    int i = 0;

    if(iNo1 < iNo2)
    {
        for(i = iNo1; i <= iNo2; i++)
        {
            printf(" %d ",i);
        }
    }
    else
    {
        printf("\n Invalid Input");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Starting number = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending number = ");
    scanf("%d",&iValue2);

    Range_Display(iValue1,iValue2);

  return 0;
}
