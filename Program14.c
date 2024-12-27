#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {
        printf("Invalid Input\n");
        return false;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    float fValue = 0.0f;
    bool bRet = false;

    printf("Enter Your Percentage : ");
    scanf("%f",&fValue);

    bRet = DisplayResult(fValue);
    if(bRet == true)
    {
        printf("Student is Pass in the exam\n");
    }
    else
    {
        printf("Student is Fail in the exam\n");
    }

    return 0;
}