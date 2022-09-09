/// Accept a Number From User & Print that Number of * on Screen

#include<stdio.h>

void Display( int iNo)
{
	int iCnt = 0;
	
	while(iCnt < iNo)
	{
		printf(" * ");
		iCnt++;
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

										