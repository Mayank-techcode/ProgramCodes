#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("Jay Hanuman...\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number of counts to be displayed: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}