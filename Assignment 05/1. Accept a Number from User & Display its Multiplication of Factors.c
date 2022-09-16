#include<stdio.h>

int Mult_Fact(int iNo)
{
    int i = 0, Fact = 0;

    for (i =1, Fact = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            Fact = Fact * i;
        }
    }

    return Fact;
}

int main()
{
    int Num = 0, iRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&Num);

    iRet = Mult_Fact(Num);

    printf("\n**********************************************************");
    printf("\n\n\t Multiplication of Factors of %d = %d",Num, iRet);
    printf("\n\n**********************************************************");

  return 0;
}
