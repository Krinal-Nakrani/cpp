#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    float dm;

    cout<<"Enter a : ";
    cin>>a;

    cout<<endl<<"Enter b : ";
    cin>>b;

    cout<<endl<<endl<<"Enter your choice : "<<
                endl<<"A.ADDITION = 1"<<
                endl<<"B.SUBSRATION = 2"<<
                endl<<"C.MULTIPLY = 3"<<
                endl<<"D.DIVISION = 4"<<
                endl<<"E.MODUAL = 5"<<
                endl<<endl<<"Enter your choice according to given list : ";
            cin>>c;

    switch(c)
    {
        case 1 :
        d=a+b;
        cout<<" A + B = "<<d;
        break;

        case 2 :
        d=a-b;
        cout<<" A - B = "<<d;
        break;

        case 3 :
        d=a*b;
        cout<<" A * B = "<<d;
        break;

        case 4 :
        d=a/b;
        cout<<" A / B = "<<d;
        break;

        case 5 :
        d=a%b;
        cout<<" A % B = "<<d;
        break;

        default :
        cout<<"wrong choice !!!";
    }
    return 0;
}