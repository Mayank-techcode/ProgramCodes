#include<iostream>
using namespace std;

void strcatX(char *Dest, char *Src)
{
    while(*Dest != '\0')
    {
        Dest++;
    }

    while(*Src != '\0')
    {
        *Dest = *Src;
        Dest++;
        Src++;
    }

    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30] = "Hello ";

    cout<<"Enter the Source String: "<<endl;
    cin.getline(Arr, 30);

    strcatX(Brr, Arr);

    cout<<"Destination String is: "<<Brr<<endl;

    return 0;
}