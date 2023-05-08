#include<bits/stdc++.h>
using namespace std;

class User{
protected:
    string name;
    int age;

};

class Admin : User{
private:
    string designation;
public:

    void setInfo(string name, int age, string designation)
    {
        this->name = name;
        this->age = age;
        this->designation = designation;
    }

    void print_info()
    {
        cout<<"Name : "<<name<<"\n";
        cout<<"Age : "<<age<<"\n";
        cout<<"Designation : "<<designation<<"\n";
    }

};

int main()
{
    Admin a;

    a.setInfo("Afsar", 24, "D");
    a.print_info();

    return 0;
}
