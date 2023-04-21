//static member function
#include<iostream>
using namespace std;

class box
{
    static int a;
    static int b;
    static int c;

    public :
        static void print ()
        {
            cout<<"leangth = "<<a <<endl;
            cout<<"breadth = "<<b <<endl;
            cout<<"height = "<<c <<endl;
        }
};
int box::a=10;
int box :: b = 20 ;
int box :: c = 30 ;

int main()
{
    box obj;
    cout<<endl <<"static member function called by obj : "<<endl;

    obj.print();

    cout<<endl <<"static member function called without obj : "<<endl;
    box :: print ();

    return 0;
}