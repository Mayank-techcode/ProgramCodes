// Source : HEllo WorLd
// Destination : HEWL

#include<iostream>
using namespace std;

void strcpyCapX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    
    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the Source string: "<<endl;
    cin.getline(Arr, 30);

    strcpyCapX(Brr, Arr);      // strcpyCapX(200, 100);

    cout<<"Destination String is: "<<Brr<<endl;

    return 0;
}