#include<bits/stdc++.h>
using namespace std;

void print(list<int>&l)
{
    auto a = l.begin();

    while(a != l.end())
    {
        cout<<*a<<" ";
        a++;
    }

    cout<<"\n";
}

void deleteValue(list<int> &l, int value)
{
    auto it = l.begin();

    int flag = 0;
    while(it != l.end())
    {
        if(*it == value)
        {
            l.erase(it);
            flag = 1;
            break;
        }
        it++;
    }
    if(flag == 0)
        cout<<"Value not found in the STL list!\n";
}

int main()
{
    list<int> l;

    ///Push Back
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);

    print(l);

    ///Delete
    deleteValue(l, 4);
    print(l);

    return 0;
}
