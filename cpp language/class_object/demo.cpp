#include<iostream>
#include<string>
using namespace std;
class Cname
{
    public :
        string name;

        void printname()
        {
            cout<< "name is : "<< name << endl;

        }
};

int main()
{
    Cname obj1;
    obj1.name="tom";
    obj1.printname();

    return 0;
}