#include<iostream>
#include<conio.h>

using namespace std ;

class add
{
    int a , b;

    public :
        add()
        {
            int x ;
             int y;

            
        cout<<endl <<"enter a : ";
        cin >> x;
        cout <<endl<<"enter b : ";
        cin >> y;
            a=x;
            b=y;
        }
        void sum()
        {
            int c = a + b;
            cout<<"\n "<<a<<" + "<<b<<" = "<<c;
        }
};

int main()
{
    

    add obj1;
    obj1.sum();

    return 0;
}