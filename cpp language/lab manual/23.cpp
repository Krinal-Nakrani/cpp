// swapping values of two using two classes and frind function...

#include <iostream>

using namespace std;

class swap
{
public:
    int a, b;

    void getdata()
    {
        cout << "enter a :";
        cin >> a;

        cout << endl
             << "enter b :";
        cin >> b;
    }

    friend void swapping(int x, int y);

    void display()
    {
        cout << endl
             << "After swapping : \n\ta = " << a << endl
             << "\tb = " << b << endl;
    }
};
void swapping(swap &t)
{
    int temp = t.a;
    t.a = t.b;
    t.b = temp;
}

int main()
{
    swap obj;
    obj.getdata();
    swapping(obj);
    obj.display();

    return 0;
}


