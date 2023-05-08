#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Father Name: "<<father->name<<"\n";
        cout<<"Mother Name: "<<mother->name<<"\n";
    }
};

int main()
{
    Person p;

    p.father = new Person;
    p.mother = new Person;

    p.name = "Afsar";
    p.father->name = "Anwar";
    p.mother->name = "Nahar";

    p.print_info();
    return 0;
}
