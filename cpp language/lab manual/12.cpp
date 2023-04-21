#include<iostream>
using namespace std;

class stud_info
{
    char name[50];
    int age;

    public : 
        void getdata(int a, int b)
        {
            name[50]=a;
            age=b;
        }
        void putdata()
        {
            cout<<"Enter your name : ";
            cin>>name;

            cout<<endl<<"enter your age : ";
            cin>>age;

            cout<<endl<<"name : "<<name <<endl << "age : "<<age ;

        }
};

int main()
{
    stud_info obj1 ;
    obj1.putdata();

    return 0;
}