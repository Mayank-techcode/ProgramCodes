#include<iostream>
using namespace std;

int Display(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<endl;
        iNo = iNo / 10;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number: ";
    cin>>iValue;
    
    Display(iValue);

    return 0;
}