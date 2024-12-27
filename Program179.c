#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {   
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    char cValue;
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that you want to search: ");
    scanf(" %c",&cValue);

    bRet = CheckOccurence(Arr,cValue);
    
    if(bRet == true)
    {
        printf("Character is present in String\n");
    }
    else
    {
        printf("Character is not present in String\n");
    }

    return 0;
}