#include<stdio.h>

int CountVowel(char *str)   // Case InSensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
           (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')   )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowel(Arr);

    printf("Numbers of Vowels are : %d",iRet);

    return 0;
}