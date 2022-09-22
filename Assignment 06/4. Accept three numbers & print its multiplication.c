#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iRes = 0;

    if(iNo1 == 0)
    {
        iNo1 = 1;
        iRes = iNo1 * iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iNo2 = 1;
        iRes = iNo1 * iNo2 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iNo3 = 1;
        iRes = iNo1 * iNo2 * iNo3;
    }

   return iRes;
}

int main()
{
    int iRet = 0;

    int iNo1 = 0, iNo2 = 0, iNo3 = 0, iRes = 0;

    printf("\n Enter three numbers => ");
    scanf("%d%d%d",&iNo1,&iNo2,&iNo3);

    iRet = Multiply(iNo1, iNo2, iNo3);

    printf("\n %d",iRet);

    return 0;
}
