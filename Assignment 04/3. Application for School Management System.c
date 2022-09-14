#include<stdio.h>

int School_Fees(int iStandard)
{
    int Fees = 0;

    if(iStandard == 1)
    {
        Fees = 8900;
    }
    else if(iStandard == 2)
    {
        Fees = 12790;
    }
    else if (iStandard == 3)
    {
         Fees = 21000;
    }
     else if (iStandard == 4)
    {
         Fees = 23450;
    }
    else
    {
        printf("\n Wrong Input");
    }
    return Fees;
}

int main()
{
    int Standard = 0;

    printf("\n Enter Your Standard\n Between 1st/2nd/3rd/4th = ");
    scanf("%d",&Standard);

    printf("\n\n You Selected Standard %d",Standard);
    printf("\n Fees are = %d",School_Fees(Standard));

    return 0;
}
