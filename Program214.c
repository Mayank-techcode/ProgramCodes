#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iMult = 1;

    iCnt = 1;
    while(iCnt <= iNo2)
    {
        iMult = iMult * iNo1;
        iCnt++;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number: ");
    scanf("%d",&iValue1);

    printf("Enter Second Number: ");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Answer is : %d",iRet);

    return 0;
}