#include<bits/stdc++.h>
using namespace std;

class Student{

public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    ///ctrl + d -> Copy + paste
    void printInformation()
    {
        cout<<"Student Name: "<<name<<"\n";
        cout<<"Student ID: "<<std_id<<"\n";
        cout<<"Student Age: "<<age<<"\n";
        cout<<"Student Father Name: "<<fathers_name<<"\n";
        cout<<"Student Mother Name: "<<mothers_name<<"\n\n";
    }

};

int main()
{
    ///Student 1
    Student s;
    s.name = "Afsar";
    s.std_id = 2034035;
    s.age = 24;
    s.fathers_name = "Anwar";
    s.mothers_name = "Nahar";

    s.printInformation();

    ///Student 2
    Student s2;
    s2.name = "Tarek";
    s2.std_id = 639;
    s2.age = 17;
    s2.fathers_name = "Anwar";
    s2.mothers_name = "Nahar";

    s2.printInformation();
    return 0;
}
