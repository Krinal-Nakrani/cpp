// converting second into hours ,minits and second

#include <iostream>
// #include<conio.h>
using namespace std;

int main()
{
    int second, hours, minuts, se2;
    // clrscr();

    cout << "Enter time in second :";
    cin >> second;

    minuts = second / 60;
    hours = minuts / 60;
    se2 = minuts % 60;

    cout << endl
         << second << " seconds = " << minuts << " minuts"
         << endl
         << minuts << " minuts = " << hours << " hours and " << se2 << " minits";
    return 0;
}
