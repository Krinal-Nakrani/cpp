#include<iostream>
 using namespace std;

class co_co
{
    int a, b ;

    public :

    void cont(int x , int y)
    {
        a=x;
        b=y;
    }

    co_co(co_co &obj)
    {
        a=obj.a;
        b=obj.b;
    }

    void display()
    {
        cout<<endl << "a + b = "<<a+b;
    }
};

int main()
{
    co_co obj1;
    obj1.cont(10,2);
    obj1.display();

    co_co obj2 = obj1;
    obj2.display();

    return 0;
}