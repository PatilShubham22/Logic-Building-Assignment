#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0, No = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            printf(" %2d ",No);
            No++;

            if(No > 9)
            {
                No = 1;
            }
        }
      printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Rows & Column Number = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

  return 0;
}
