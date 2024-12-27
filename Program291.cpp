#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        SumDigits(iNo / 10);    // Imp
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