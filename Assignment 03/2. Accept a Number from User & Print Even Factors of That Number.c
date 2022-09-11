/// Accept a Number from User & Print Even Factors of That Number

#include<stdio.h>

void Display_Factor(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1; i <= iNo; i++)
	{
		if((iNo % i == 0) && (i % 2 == 0 ))
		{
		printf(" %d ",i);
	    }
	 }   
}

int main()
{
	int iValue = 0;
	
	printf("\n Enter a Number = ");
	scanf("%d",&iValue);
	
	Display_Factor(iValue);
	
	return 0;
}																																																	