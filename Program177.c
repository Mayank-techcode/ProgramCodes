#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str)  // Case InSensitive
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if((*str == 'l') || (*str == 'L'))
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
        printf("Letter l is present\n");
    }
    else
    {
        printf("Letter l is not present\n");
    }

    return 0;
}