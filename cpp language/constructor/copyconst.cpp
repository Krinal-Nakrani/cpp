#include<iostream>
#include<conio.h>

using namespace std ;

// class add
// {
//     int a , b;

//     public :
//         add( int x ,int y)
//         {
           
//             a=x;
//             b=y;
//         }

//         add(add &obj)
//         {
//             a=obj.a;
//             b=obj.b;
//         }
//         int sum()
//         {
//             int c = a + b;
//             cout<<"\n "<<a<<" + "<<b<<" = "<<c;
//         }
// };

// int main()
// {
    

//     add obj1(10 , 10);
//     obj1.sum();

//     add obj2 = obj1;
//     obj2.sum();


//     return 0;
// }

class add
{
    int a, b;
    public :
     add(int x , int y)
     {
        a=x;
        b=y;
     }
     add(add &obj)
     {
        a=obj.a;
        b=obj.b;
     }
        int sum()
        {
            int c = a + b;
            cout<<"\n a + b = "<<c<<endl;

        }
};0

int main()
{
    add obj1(10,10);
    obj1.sum();

    add obj2 = obj1;
    obj2.sum();

}