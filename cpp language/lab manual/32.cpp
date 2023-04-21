#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    float *p;
    p = new float[num];

    cout << "\nEnter a gpa of students : ";

        for (int i = 0; i < num; i++)
    {
        cout << "student " << i + 1 << " : ";
        cin >> *(p = i);
    }

    cout << "GPA of students :" ;
    for (int i = 0; i < num; i++)
    {
        cout << "student " << i + 1 << " : " << *(p + i) << endl;
    }

    delete[] p;

    return 0;
}