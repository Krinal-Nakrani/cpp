#include<iostream>
using namespace std;

class A
{
    public : 
    A()
    {
        cout<<"hellow...\nThis is parent class !";
    }
};

class B : public virtual A
{
    public :
    B()
    {
        cout<<"\n second class !\n";
    }
};

class C : public virtual A ,B
{
    public :
    C()
    {
        cout<<"\nlast class !";
    }
};

int main()
{
    C o;
    
    return 0;
}