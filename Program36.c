#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }   
    }   
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0; 

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum of Factors are: %d",iRet);

    return 0;
}