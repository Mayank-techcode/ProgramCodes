/*
    Accept number as No
    Search all its factors
    Perform addition of all the factors
    If addition is same as No
    then Display No is perfect number
    otherwise Display as No is not perfect number
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)     // Filter
    {
        printf("Please Enter Positive Number only \n");
        return false;
    }

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
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

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a Perfect Number \n",iValue);
    }
    else
    {
        printf("%d is not a Perfect Number \n",iValue);
    }
    
    return 0;
}
