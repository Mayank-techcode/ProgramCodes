#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
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