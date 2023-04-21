//READING AND DISPLAYING ARRAY ELEMENTS USING CLASS
#include<iostream>

using namespace std ;

class array
{
    int array[5];
    public :
        void read()
        {
            cout << "reading array with class : "<<endl ;

            for (int i = 0 ; i<5 ; i++)
            {
                cout<<endl<<"Enter element no "<<i+1 <<" : ";
                cin>>array[i];
            }

            cout<<endl << "printing array : "<<endl ;
             for(int i=0 ; i<5 ; i++)
             {
                cout<<endl<<array[i];
             }
        }
};

int main()
{
    array obj1;
    obj1.read();

    return 0;
}