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

    bool operator < (Student s)
    {
        return stu_id < s.stu_id;
    }

};

//bool comp(Student a, Student b)
//{
//    //When a is less than b
//    return a.stu_id < b.stu_id;
//}

int main()
{
    vector<Student> a;

    for(int i=0; i<10; i++)
    {
        a.push_back(Student("A", 20-i, 20));
    }

    cout<<"Before Sorting: \n";

    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }

//    sort(a.begin(), a.end(), comp);
    sort(a.begin(), a.end());

    cout<<"After Sorting: \n";
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }

    return 0;
}


