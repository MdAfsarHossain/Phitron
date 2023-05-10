#include<bits/stdc++.h>
using namespace std;

///Memory Complexity: O(n)
class Array{
private:
    int *ara;
    int cap;
    int sz;

    void Increase_size()
    {
        cap *= 2;
        int *tmp = new int[cap];
        for(int i=0; i<sz; i++)
        {
            tmp[i] = ara[i];
        }

        delete [] ara;
        ara = tmp;
    }
public:
    Array()
    {
        ara = new int[1];
        cap = 1; // Array Size
        sz = 0; // Empty Array
    }

    ///Time Complexity: O(1)
    void Push_back(int x)
    {
        if(cap == sz)
        {
            Increase_size();
        }
        ara[sz] = x;
        sz++;
    }
    ///Time Complexity: O(sz)
    void Print()
    {
        for(int i=0; i<sz; i++)
        {
            cout<<ara[i]<<" ";
        }
        cout<<"\n";
    }

    ///Time Complexity: O(1)
    int getSize()
    {
        return sz;
    }

    ///Time Complexity: O(1)
    int getElement(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<" is out of bound!\n";
            return -1;
        }
        return ara[idx];
    }

};
int main()
{
    Array a;

    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);

    a.Print();

    cout<<a.getSize()<<"\n";

    for(int i=0; i<a.getSize(); i++)
    {
        cout<<a.getElement(i)<<"\n";
    }

    return 0;
}

