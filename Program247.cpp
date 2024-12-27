#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    char Brr[30];

    strcpy(Brr, Arr);

    cout<<"Destination String : "<<Brr<<endl;

    return 0;
}