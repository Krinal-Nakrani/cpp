// pettern using recursion
// *
// * *
// * * *
// * * * *
// * * * * *
#include <iostream>
// #include<conio.H>
using namespace std;

void print(int num)
{
    if(num == 0)
    return;
        cout << " * ";
        print(num-1);
}

void pettern(int n , int i)
{
    if(n== 0)
    return;
        print(i);
        cout<<endl;
        pettern(n-1 , i+1 );
}

int main()
{
    int n;

    // clrscr();

    cout<<endl<<"Enter a number : ";
    cin>>n ; 

    pettern(n,1);

    // getch();
    return 0;
}