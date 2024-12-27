#include<stdio.h>

// User Defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {
        return RET_INVALID;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else
    {
        return RET_PASS;
    }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if(iRet == RET_INVALID)
    {
        printf("Your input is invalid \n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is Fail \n");
    }
    else if(iRet == RET_PASS)
    {
        printf("Student is Pass\n");
    }

    return 0;
}