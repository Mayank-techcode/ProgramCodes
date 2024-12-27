#include<iostream>
using namespace std;

int Addition(int iNo)
{
    static int i = 1, iSum = 0;

    if(i <= iNo)
    {
        iSum = iSum + i;
        i++;
        Addition(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number: ";
    cin>>iValue;
    iRet = Addition(iValue);    

    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}