/// Accept a Number from User & Print Even Factors of that Number

#include<stdio.h>

void Display_Even_Factor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo - 1; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf(" %d ",i);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter a Number = ");
    scanf("%d",&iValue);

    Display_Even_Factor(iValue);

    return 0;
}
