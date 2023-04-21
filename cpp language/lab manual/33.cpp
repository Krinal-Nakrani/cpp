//creating a file ....
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream f;
    f.open("file1.txt",ios::out);

    if(!f)
    {
        cout<<"failed !!!";
    }
    else
    {
        cout<<"operation completed !";
        f<<"learning file handling !\n";
        f<<"this file is created by c++ program !";

        f.close();
    }

    fstream f2;
    f2.open("file2.txt",ios::out);

    cout<<"\noperation completed for file 2 !";
    f2<<"file 2 !";
    f2<<"\ncreated by c++ program !";

    f.close();

    return 0;
}