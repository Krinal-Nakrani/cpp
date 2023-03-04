#include<iostream>
#include<string>
using namespace std;

int main()
{
    for(int i = 1 ; i<=5 ; i++)
    {
        for(int j = 1 ; j<=i ; j++)
        {
            cout << " * " ;
        }
        cout<< endl ;
    }
    for(int i = 1 ; i<=5 ; i++)
    {
        for(int j =5  ; j>=i ; j--)
        {
            cout <<  i << " " ;
        }
        cout<< endl ;
    }
    for(int i = 1 ; i<=5 ; i++)
    {
        for(int j =5  ; j>=i ; j--)
        {
            cout <<" * " ;
        }
        cout<< endl ;
    }
     for(int i = 1 ; i<=5 ; i++)
    {
        for(int j =5  ; j>=i ; j--)
        {
            cout <<  j << " " ;
        }
        cout<< endl ;
    }
    for(int i = 5 ; i>=1 ; i--)
    {
        for(int j = 1 ; j<=i ; j++)
        {
            cout << j <<" " ;
        }
        cout<< endl ;
    }
}