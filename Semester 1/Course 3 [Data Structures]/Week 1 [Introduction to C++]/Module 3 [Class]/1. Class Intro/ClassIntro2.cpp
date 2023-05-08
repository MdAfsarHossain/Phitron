#include<bits/stdc++.h>
using namespace std;

class Rectangle{

public:
    int width, height;

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
    cout<<"Rectangle Perimeter : "<<r.calculate_perimeter()<<"\n";

    return 0;
}
