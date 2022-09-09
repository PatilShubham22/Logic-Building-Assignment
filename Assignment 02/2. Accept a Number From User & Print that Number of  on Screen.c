/// Accept a Number From User & Print that Number of * on Screen

#include<stdio.h>

void Display( int iNo)
{
	int i = 0;
	
	while(iNo > i)
	{
		printf(" * ");
		iNo--;
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

										