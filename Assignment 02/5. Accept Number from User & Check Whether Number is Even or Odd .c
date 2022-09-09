/// Accept Number from User & Check Whether Number is Even or Odd 

#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkEven( int iNo)
{
    if(iNo % 2 == 0)
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
	
	printf("\n Enter Number = ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == True)
	{
		printf("\n Number is Even");
	}
	else
	{
		printf("\n Number is Odd");
	}		
	
	return 0;
}

										