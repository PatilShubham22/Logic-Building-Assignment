#include<stdio.h>

void Pattern(int Row,int Column)
{
    int i = 0, j = 0;

    for(i = Row; i >= 1; i--)
    {
        for(j = 1; j <= Column; j++)
        {
            printf(" %d ", i);
        }
       printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter number of rows & columns = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

  return 0;
}


