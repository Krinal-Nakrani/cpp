//fibonacci series
#include<iostream>>
using namespace std;

int main()
{
    int n, sum=0,t1=0,t2=1;
    //clrscr();

    cout<<"enter a number : ";
    cin>>n;

    cout<<endl<<"Fibonacci series : ";

    for(int i = 1 ; i<=n ; i++)
    {
        if(i==1)
        {
            cout<< t1 << " , ";
        }
        if(i==2)
        {
            cout<< t2 << " , ";
        }

        sum=t1+t2;
        t1=t2;
        t2=sum;

        cout<< sum << " , ";
    }
    return 0;
}