#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");

    fout<<"United states of america\n";
    cout<<endl;
    fout<<"United kingdom\n";
    cout<<endl;
    fout<<"south korea\n";
    cout<<endl;

    fout.close();

    fout.open("capital");

    fout<<"Washington\n";
    cout<<endl;
    fout<<"London\n";
    cout<<endl;
    fout<<"seoul\n";
    cout<<endl;

    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;
    fin.open("country");

    cout<<"Contents of country file\n";

    while(fin)
    {
        fin.getline(line, N);
        cout<<line;
    }

    fin.close();

    fin.open("capital");

    cout << "Contents of capital file \n";

    while(fin)
    {
        fin.getline(line, N);
        cout<< line ;
    }

    fin.close();

    return 0;
}