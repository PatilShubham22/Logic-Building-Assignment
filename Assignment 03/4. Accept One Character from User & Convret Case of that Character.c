/// Accept One Character from User & Convret Case of that Character

#include<stdio.h>

void Display_Convert(char cValue)
{
	if(cValue >= 'A' && cValue <= 'Z')
	{
		cValue = cValue + 32;
		printf("%c", cValue);
	}	
	else if(cValue >= 'a' && cValue <= 'z')
	{
		cValue = cValue - 32;
		printf("%c", cValue);
	}	
}

int main()
{
	char cValue = '\0';
	
	printf("\n Enter Character = ");
	scanf("%c",&cValue);
	
	Display_Convert(cValue);
	
	return 0;
}																																																	