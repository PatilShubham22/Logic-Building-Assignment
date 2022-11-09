#include<stdio.h>
#include<conio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0, No = 0, No1 = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
           printf(" %d ", i + j);
        }
      printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Row & Column Numbers = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

  return 0;
}
