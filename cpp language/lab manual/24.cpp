//findinng max of two by two class with one friend function

#include<iostream>
using namespace std;

void max();

class num1
{
    int n1;
    public :
        num1()
        {
            cout<<"Enter a : ";
            cin>>n1;
        }
        friend void max();
};

class num2
{
    int n2;
    public :
        num2()
        {
            cout<<endl<<"Enter b : ";
            cin>>n2;
        }
        friend void max();
};

void max()
{
    num1 o1;
    num2 o2;

    if (o1.n1 > o2.n2)
    {
        cout<<endl<<"\n "<<o1.n1 <<" is max !!!";
    }
    else
    {
        cout<<endl<<"\n "<<o2.n2 <<" is max !!!";
    }
}

int main()
{
    max();

    return 0;
}