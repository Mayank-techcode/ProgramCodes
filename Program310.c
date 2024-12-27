#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        iSum = iSum + iDigit;
        iNo = iNo / 2;
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1 are: %d",iRet);

    return 0;
}