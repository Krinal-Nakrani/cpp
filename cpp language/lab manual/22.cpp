#include<iostream>

using namespace std;

class employee
{
    int x, y ;
    public :
    employee(int a ,int b)
    {
        x=a;
        y=b;

        cout<<"constructor invoked ! "<<a+b<<endl ;
    }

    ~employee()
    {
        cout<<" no"<<endl ;
    }
};

int main()
{
    employee e1(10,5);
    // employee e2(10,5);

    return 0;
}