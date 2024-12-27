#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str)  // Case Sensitive
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if(*str == 'w')
        {   
            bFlag = true;
            break;
        }
        str++;
    }
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurence(Arr);
    
    if(bRet == true)
    {
        printf("Letter w is present\n");
    }
    else
    {
        printf("Letter w is not present\n");
    }

    return 0;
}