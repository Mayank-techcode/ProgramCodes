#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positive inputs

// Algorithm
/*
    Start
        Accept one number as No
        Divide that number No by 2
        If remainder is 0
        then display the result as Even Number
        otherwise display the result as Odd Number
    STOP
*/

/////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Used to check whether number is even or odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Mayank Jagdish Salunkhe
//  Date :          16/05/2024
//
/////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
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
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number \n",iValue);
    }
    else
    {
        printf("%d is Odd Number \n",iValue);   
    }

    return 0;
}