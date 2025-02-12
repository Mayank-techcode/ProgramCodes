#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    
    public:
        ArrayX(int No)
        {
            cout<<"Inside Constructor"<<endl;
            iSize = No;
            Arr = new int(iSize);
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements: "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Elements are : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the Number of elements that you want to store: "<<endl;
    cin>>iLength;
    
    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    aobj.Arr = NULL;   // Error
    aobj.iSize = 20;   // Error
      
    return 0;
}