///Accept a number from user & check whether that number is greater than 100 or not

#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL Chk_Greater(int iNo)
{
    if(iNo > 100)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
   int iValue = 0;

   BOOL bRet = False;

   printf("\n Please enter Number = ");
   scanf("%d",&iValue);

   bRet = Chk_Greater(iValue);

   if(bRet == True)
   {
       printf("\n\t Greater");
   }
   else
   {
       printf("\n\t Smaller");
   }

   return 0;
}
