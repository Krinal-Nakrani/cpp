//copy constructor

#include<iostream>

using namespace std;

class copy_co
{
    int a, b ;

    public :
        copy_co(int x , int y )
        {
            a=x ; 
            b=y ;
        }

        copy_co(copy_co &obj)
        {
            a=obj.a ;
            b=obj.b ;
        }

        void display()
        {
            cout << endl <<a<< " + "<<b <<" = "<<a+b ;
        }
};

int main()
{
    copy_co obj1(10,2);
    obj1.display();

    copy_co obj2=obj1;
    obj2.display();

    return 0;
}