#include <iostream>

using namespace std;

int main()
{
    int *p = NULL;

    p = new (nothrow) int;
    if (!p)
        cout << "\n memory allocation failed !!!";
    else
    {
        *p = 10;
        cout << "p = " << *p << endl;
    }

    float *r = new float(75.20);
    cout << "r = " << *r;

    int n = 15;
    int *q = new (nothrow) int[n];

    if (!q)
        cout << "\n memory allocation failed !!!";

    else
    {
        for (int i = 0; i < n; i++)
            q[i] = i + 1;

        cout << "\n block of memory : \n";
        for (int i = 0; i < n; i++)
            cout << "\t" << q[i];
    }

    delete p;
    delete r;
    delete[] q;

    return 0;
}