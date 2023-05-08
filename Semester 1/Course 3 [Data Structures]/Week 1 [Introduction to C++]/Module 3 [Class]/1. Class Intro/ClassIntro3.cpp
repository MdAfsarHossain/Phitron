#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int id;
    int age;

    void printInformation()
    {
        cout<<"Student Name: "<<name<<"\n";
        cout<<"Student ID: "<<id<<"\n";
    }
};


class Rectangle{
public:
    int width, height;

    Student s;

    ///Area
    int calculate_area()
    {
        return height*width;
    }

    ///Perimete
    int calculate_perimeter()
    {
        return 2*(width+height);
    }
};

int main()
{
    Rectangle r;
    r.width = 4;
    r.height = 8;
    cout<<"Rectangle Area : "<<r.calculate_area()<<"\n";
    cout<<"Rectangle Perimeter : "<<r.calculate_perimeter()<<"\n\n";

    r.s.name = "Afsar";
    r.s.id = 2034035;
    r.s.printInformation();

    return 0;
}

