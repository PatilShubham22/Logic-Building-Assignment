/// Accept a Number from User & Print that Number of Even Numbers on Screen

#include<stdio.h>

void PrintEven(int iNo)
{
	int i = 0, Even = 0;
	
	if(iNo <= 0)
	{
		return;
	}
	
	for(i = 1; i <= iNo; i++)
	{
		Even = Even + 2;
		printf(" %d ",Even);
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("\n Enter a Number = ");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}																																																	