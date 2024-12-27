#include<stdio.h>

int CountDigits(int iNo)
{
    // int iDigit = 0 
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
    //  iDigit = iNo % 10;       Without this statement
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits are: %d",iRet);
    
    return 0;
}