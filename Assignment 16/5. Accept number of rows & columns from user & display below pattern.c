#include<stdio.h>

void Pattern(int Row,int Column)
{
    int i = 0, j = 0, x = 1;

    for(x = 1, i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Column; j++)
        {
            printf(" %3d ", x);
            x++;
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


