#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int age;

    void print_info()
    {
        cout<<"Student Name: "<<name<<"\n";
        cout<<"Student Age: "<<age<<"\n";
    }

};

int main()
{
    Student s;

    s.name = "Afsar";
    s.age = 24;

    s.print_info();

    return 0;
}
