#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int stu_id;
    int age;

    Student()
    {

    }

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
        cout<<"Age : "<<age<<"\n\n";
    }

};

int main()
{
    Student s[10];

    for(int i=0; i<10; i++)
    {
        s[i] = Student("A", i+1, 20);
    }

    for(int i=0; i<10; i++)
    {
        s[i].print_info();
    }

    return 0;
}

