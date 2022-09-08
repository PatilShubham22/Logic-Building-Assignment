/// Accept a Number And Check whether it is Divisible by 5 or Not

#include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0

BOOL Check(int iNo)
{
	if((iNo % 5) == 0)
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
	
	bRet = Check(iValue);
	
	if(bRet == True)
	{
		printf("\n Divisible by 5");
	}
	else
	{
		printf("\n Not Divisible by 5");
	}		
	
	return 0;
}

										