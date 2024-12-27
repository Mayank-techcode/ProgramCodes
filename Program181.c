#include<stdio.h>
#include<stdbool.h>

int CheckOccurence(char *str, char ch)
{
    int iCnt = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {   
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that you want to search: ");
    scanf(" %c",&cValue);

    iRet = CheckOccurence(Arr,cValue);
    
    if(iRet == -1)
    {
        printf("There is no such letter\n");
    }
    else
    {
        printf("Letter occurs at position %d\n",iRet);
    }

    return 0;
}