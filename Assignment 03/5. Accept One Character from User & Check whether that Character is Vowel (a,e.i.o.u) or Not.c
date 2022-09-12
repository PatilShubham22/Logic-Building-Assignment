/// Accept One Character from User & Check whether that Character is Vowel (a,e.i.o.u) or Not

#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkVowel(char Value)
{
    if(Value == 'a' || Value == 'A' || Value == 'e' || Value == 'E' || Value == 'i' || Value == 'I' || Value == 'o' || Value == 'O' || Value == 'u' || Value == 'U')
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
    char cValue = '\0';
    BOOL bRet = False;

    printf("\n Enter Character = ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == True)
    {
        printf("\n it is Vowel");
    }
    else
    {
        printf("\n it is Not Vowel");
    }

    return 0;
}
