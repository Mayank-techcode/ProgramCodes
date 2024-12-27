#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);    // Imp
        SumDigits(iNo / 10);         // Imp
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number: ";
    cin>>iValue;
    
    iRet = SumDigits(iValue);

    cout<<"Sum of Digits are: "<<iRet<<endl;

    return 0;
}