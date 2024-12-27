#include<stdio.h>
#include<stdbool.h>

//  INPUT = 11      NO/2 = 5        iCnt = 6
//  INPUT = 17      NO/2 = 7        iCnt = 9

//  INPUT = 10      NO/2 = 5        iCnt = 2
//  INPUT = 15      NO/2 = 8        iCnt = 3
bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            
            break;
        }
    }

    if(iCnt > (iNo/2))
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

    printf("Enter Number: ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is a Prime Number \n",iValue);
    }
    else
    {
        printf("%d is not a Prime Number \n",iValue);
    }
    
    return 0;
}
