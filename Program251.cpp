// Source : HEllo WorLd
// Destination : lloord

#include<iostream>
using namespace std;

void strcpySmallX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src <= 'z'))
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

    strcpySmallX(Brr, Arr);      // strcpySmallX(200, 100);

    cout<<"Destination String is: "<<Brr<<endl;

    return 0;
}