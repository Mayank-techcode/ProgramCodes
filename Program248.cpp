#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    int iRet = 0;

    iRet = strlen(Arr);

    cout<<"String is : "<<iRet<<endl;

    return 0;
}