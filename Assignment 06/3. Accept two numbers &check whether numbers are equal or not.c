#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL Chk_Equal(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = 0;

    printf("\n Enter two numbers => ");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = Chk_Equal(iValue1,iValue2);

    if(bRet == True)
    {
        printf("\n Equal");
    }
    else
    {
        printf("\n Not Equal");
    }

    return 0;
}
