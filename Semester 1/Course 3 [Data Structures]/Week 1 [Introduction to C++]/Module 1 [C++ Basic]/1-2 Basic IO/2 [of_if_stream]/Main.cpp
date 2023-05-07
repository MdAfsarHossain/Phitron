#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Output 1
    ofstream of1;
    of1.open("1.txt");
    of1<<"Hello World\n";

    //Output 2
    ofstream of2;
    of2.open("2.txt");
    of2<<"Hello OF2";

    //Input 1
    ifstream ifs1;
    ifs1.open("ifs1.txt");
    int x;
    double y;
    char ch;
    ifs1>>x>>y>>ch;
    cout<<x<<" "<<y<<" "<<ch<<endl;

    //Close all File
    of1.close();
    of2.close();
    ifs1.close();

    return 0;
}
