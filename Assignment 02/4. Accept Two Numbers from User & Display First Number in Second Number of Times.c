/// Accept Two Numbers from User & Display First Number in Second Number of Times

#include<stdio.h>

void Display( int iNo, int iFrequency)
{
	int i = 0;
	
	for(i = 1; i <= iFrequency; i++)
	{
		printf(" %d ", iNo);
	}					
	return;
}			

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("\n Enter Number = ");
	scanf("%d",&iValue);
	
	printf("\n Enter Frequency = ");
	scanf("%d",&iCount);
	
	Display(iValue, iCount);
	
	return 0;
}

										