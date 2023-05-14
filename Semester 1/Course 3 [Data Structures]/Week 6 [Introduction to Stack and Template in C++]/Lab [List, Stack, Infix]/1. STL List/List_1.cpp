#include<bits/stdc++.h>
using namespace std;

void print(list<int>&l)
{
    ///Time Complexity: O(n)
//    list<int>::iterator a = l.begin();
    auto a = l.begin();

    while(a != l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
}

int main()
{
    list<int> l;

    ///Push Front: O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    ///Push Back: O(1)
    l.push_back(50);
    l.push_back(60);

    print(l);

    ///Pop Back: O(1)
    l.pop_back();
    print(l);

    ///Pop Front: O(1)
    l.pop_front();
    print(l);

    return 0;
}
