#include<stdio.h>

int strlenCapX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
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

    iRet = strlenCapX(Arr);

    printf("Numbers of Capital letters are : %d",iRet);

    return 0;
}