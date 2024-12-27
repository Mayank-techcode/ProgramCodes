#include<iostream>
using namespace std;

void DisplayStars(int iNo)
{
    static int i = 1;
    
    if(i <= iNo)
    {
        cout<<"*"<<endl;
        i++;
        DisplayStars(iNo);     // Recursive call
    }
    cout<<"End of Display"<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number: ";
    cin>>iValue;
    DisplayStars(iValue);    

    cout<<"End of application"<<endl;

    return 0;
}