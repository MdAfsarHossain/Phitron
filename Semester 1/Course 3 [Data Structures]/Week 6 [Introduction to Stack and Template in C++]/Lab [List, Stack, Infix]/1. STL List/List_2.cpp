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

///O(n)
void Insert(list<int>&l, int index, int value)
{
    auto it = l.begin(); //O(1)
    advance(it, index);  //O(index)
    l.insert(it, value); //O(1)
}

///O(n)
void Delete(list<int>&l, int index)
{
    auto it = l.begin(); //O(1)
    advance(it, index);  //O(index)
    l.erase(it);         //O(1)
}

int main()
{
    list<int> l;

    ///Push Front
    l.push_front(30);
    l.push_front(20);
    l.push_front(10);

    print(l);

    ///Insert at any position: O(1)
//    auto it = l.begin();
//    advance(it, 1);
//    l.insert(it, 15);
//    print(l);

    ///Inesrt
    Insert(l, 1, 15);
    print(l);

    ///Delete
    Delete(l, 1);
    print(l);

    ///Size
    cout<<l.size()<<"\n";

    return 0;
}
