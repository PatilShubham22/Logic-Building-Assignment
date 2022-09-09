/// Accept a Number From User if Number is Less than 10 then Print "Hello" Otherwise Print "Demo"

#include<stdio.h>

void Display( int iNo)
{
	if(iNo < 10)
	{
		printf("\n Hello");
	}
	else
	{
		printf("\n Demo");
	}					
	return;
}			

int main()
{
	int iValue = 0;
	
	printf("\n Enter Number = ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

										