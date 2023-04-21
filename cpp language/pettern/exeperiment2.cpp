#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == i)
                {
                    cout << "\t*";
                }
                else
                {
                    cout << "\t";
                }
            }
            cout << endl;
        }
        int x = n - 1;
        for (int p = x; p >= 1; p--)
        {
            for (int q = 1; q <= p; q++)
            {
                if (q == p)
                {
                    cout << "\t*";
                }
                else
                {
                    cout << "\t";
                }
            }
            cout << endl;
        }
        cout << endl;

        n--;
    }
    return 0;
}
