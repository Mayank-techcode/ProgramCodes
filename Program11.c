#include<stdio.h>
#include<stdbool.h>

/*
    Start
        Accept one number as No
        If the Number is greater than 30 and if it is less than 50
        then display the message as number is in range
        otherwise
        display the message as number is not in the range
    Stop
*/

bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{   
    int iValue = 0;
    bool bRet = false;
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf("%d is in the Range 30 & 50\n",iValue);
    }
    else
    {
        printf("%d is not in the Range 30 & 50\n",iValue);
    }

    return 0;
}