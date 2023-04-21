#include <iostream>
#include <string>

using namespace std;

class vehicle
{
    string type;
    string name;

public:
    void getin()
    {
        cout << endl
             << "TYPE OF VEHICLE : ";
        cin >> type;

        cout << endl
             << "NAME OF VEHICLE : ";
        cin >> name;
    }

    void display()
    {
        cout << endl
             << "\t YOUR VEHICLE'S INFORMATION : " << endl
             << "TYPE :" << type << endl
             << "NAME :" << name;
    }
};

class person1 : private vehicle
{
    string color;
    string buy_date;

public:
    void per_info()
    {
        getin();
        cout << endl
             << "COLOR OF VEHICLE : ";
        cin >> color;

        cout << endl
             << "BUYING DATE : ";
        cin >> buy_date;
    }

    void display2()
    {
        display();
        cout << endl
             << "COLOR :" << color << endl
             << "BUYING DATE :" << buy_date;
    }
};

int main()
{
    person1 obj1;
    obj1.per_info();
    obj1.display2();

    cout << endl
         << endl
         << "NEXT INFORMATION :" << endl;
    person1 obj2;
    obj2.per_info();
    obj2.display2();

    cout << endl
         << endl
         << "NEXT INFORMATION :" << endl;
    person1 obj3;
    obj3.per_info();
    obj3.display2();

    return 0;
}