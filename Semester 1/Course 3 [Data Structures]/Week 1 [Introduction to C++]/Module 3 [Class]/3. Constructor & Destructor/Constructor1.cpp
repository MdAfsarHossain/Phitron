#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int stu_id;
    int age;

    Student(string name, int stu_id, int age)
    {
        this->name = name;
        this->stu_id = stu_id;
        this->age = age;
    }

    void print_info()
    {
        cout<<"Name : "<<name<<"\n";
        cout<<"ID : "<<stu_id<<"\n";
        cout<<"Age : "<<age<<"\n";
    }
};

int main()
{
    Student s("Afsar", 2034035, 24);

    s.print_info();

    return 0;
}
