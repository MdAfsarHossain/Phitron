#include<bits/stdc++.h>
using namespace std;

class Cuboid
{
private:
    int length, width, height;
public:
    int volume;
    int area;

    Cuboid()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    Cuboid(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int getVolume()
    {
        volume = length*width*height;
        return volume;
    }

    int getSurfaceArea()
    {
        area = 2*length*width + 2*length*height + 2*height*width;
        return area;
    }

    bool operator < (Cuboid c)
    {
        return volume < c.volume;
    }

};


int main()
{
//    Cuboid cub[5];
//    Cuboid cub2(2, 5, 8);
    vector<Cuboid> cub;

    for(int i=0; i<5; i++)
    {
        cub.push_back(Cuboid(1+i, 2+i, 3+i));
//        cout<<"Cuboid "<<i+1<<": \n";
//        cout<<cub[i].getVolume()<<"\n";
//        cout<<cub[i].getSurfaceArea()<<"\n";
//        cout<<"\n";
    }

    for(int i=0; i<5; i++)
    {
        cub[i].getVolume();
    }

    sort(cub.begin(), cub.end());

    cout<<"Volume: \n";
    for(int i=0; i<5; i++)
    {
//        cout<<cub[i].getVolume()<<"\n";
        cout<<cub[i]<<"\n";
    }

    cout<<"\nArea: \n";
    for(int i=0; i<5; i++)
    {
        cout<<cub[i].getSurfaceArea()<<"\n";
    }



    return 0;
}
