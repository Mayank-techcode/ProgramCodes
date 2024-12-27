#include<iostream>
using namespace std;

// Approach :  Using Recursion

void DisplayStars()
{
    static int i = 1;
    
    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
        DisplayStars();     // Recursive call
    }
}

int main()
{
    DisplayStars();    

    return 0;
}