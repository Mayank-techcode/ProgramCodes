#include<stdio.h>
#include<stdbool.h>

// Time Complexity : O(N)

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factor of %d are: \n",iNo);

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }   
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}