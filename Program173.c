#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Numbers of Spaces are : %d",iRet);

    return 0;
}