#include<stdio.h>
#include<stdbool.h>

/*
    iNo     11      0 0 0 0 1 0 1 1
           Mask --> 0 0 0 0 1 0 0 0
                    ------------------ &
                    0 0 0 0 1 0 0 0 
____________________________________________

    iNo     20      0 0 0 1 0 1 0 0
           Mask --> 0 0 0 0 1 0 0 0
                    ------------------ &
                    0 0 0 0 0 0 0 0 
*/
bool CheckBit(int iNo)
{
    unsigned int iMask = 8;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    unsigned int iValue = 0;
    bool bRet = 0; 
    
    printf("Enter Number: \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}

/*
-------------------------------------
    OP1     OP2     &     |    ^
-------------------------------------
    1       1       1     1    0
    1       0       0     1    1
    0       1       0     1    1
    0       0       0     0    0
-------------------------------------
*/