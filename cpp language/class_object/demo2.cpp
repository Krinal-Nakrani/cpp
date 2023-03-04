#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string s_name;
    string s_ro_no;
    string s_age;
    string s_bdate;

    void s_information()
    {
        cout << "Name : " << s_name << endl;
        cout << "Ro no. : " << s_ro_no << endl;
        cout << "Age : " << s_age << endl;
        cout << "Birthday : " << s_bdate << endl;
    }
};

int main()
{
    student obj1;
    obj1.s_name = "nakrani krinal";
    obj1.s_ro_no = "11153";
    obj1.s_age = "18";
    obj1.s_bdate = "19 june, 2004";

    obj1.s_information();

    return 0;
}