#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0, No = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, No = 1, ch = 'a'; j <= iColumn; j++)
        {
            if(i % 2 == 1)
            {
                printf(" %c ",ch);
                ch++;
            }
            else
            {
                printf(" %d ",No);
                No++;
            }
        }
       printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Row & Column Number = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

  return 0;
}
