// Approach 3

#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1;
        int iNo2;

        Arithmetic(int A = 0, int B = 0)
        {
            iNo1 = A;
            iNo2 = B;
        }
        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }
};

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number: "<<endl;
    cin>>iValue1;

    cout<<"Enter Second Number: "<<endl;
    cin>>iValue2;

    Arithmetic aobj(iValue1, iValue2);

    iRet = aobj.Addition();

    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}