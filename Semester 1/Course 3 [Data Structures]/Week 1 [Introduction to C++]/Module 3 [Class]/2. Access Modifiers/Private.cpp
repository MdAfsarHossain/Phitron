#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string name;
    int age;
public:
    int stu_id;

    void print_info()
    {
        cout<<"Student Name: "<<name<<"\n";
        cout<<"Student Age: "<<age<<"\n";
        cout<<"Student ID: "<<stu_id<<"\n";
    }

    void setInformation(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

};

int main()
{
    Student s;

    s.setInformation("Afsar", 24);
    s.stu_id = 2034035;

    s.print_info();

    return 0;
}

