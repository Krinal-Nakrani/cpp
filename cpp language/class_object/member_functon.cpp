#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
        string name;
        int ro_no;

    public:
        void info()
        {
            cout << endl << "name  : " << name << endl
                << "ro_no : " << ro_no << endl ;
        }

        void chare(string s_n, int rono)
        {
            name = s_n;
            ro_no = rono;
        }
};

int main()
{
    student obj2;
    obj2.chare("MUNGI MRUNMAYEE", 11151);
    obj2.info();

    student obj3;
    obj3.chare("NIDHI NAGAP ", 11152);
    obj3.info();

    student obj1;
    obj1.chare("KRINAL NAKRANI ", 11153);
    obj1.info();

    return 0;
}