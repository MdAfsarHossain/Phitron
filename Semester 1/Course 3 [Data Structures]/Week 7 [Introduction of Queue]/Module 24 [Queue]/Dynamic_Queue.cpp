#include<bits/stdc++.h>
using namespace std;

///Queue Using Dynamic Circular Array
class Queue{
public:
    int *a;
    int array_cap;
    int l, r;
    int sz;

    Queue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;

    }

    void remove_circular()
    {
        if(l>r)
        {
            int *temp = new int[array_cap];
            int index = 0;
            for(int i=1; i<array_cap; i++)
            {
                temp[index] = a[i];
                index++;
            }
            for(int i=0; i<=r; i++)
            {
                temp[index] = a[i];
                index++;
            }

            swap(a, temp);
            l = 0;
            r = array_cap - 1;
            delete [] temp;
        }
    }

    void increase_size()
    {
        remove_circular();
        ///Size Increase
        int *temp = new int[array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        array_cap = array_cap * 2;
        delete [] temp;
    }

    void enqueue(int value)
    {
        if(sz == array_cap)
        {
            increase_size();
        }
        r++;
        if(r == array_cap)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        l++;
        if(l == array_cap)
        {
            l = 0;
        }
        sz--;
    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty!\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Queue q;

    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size: "<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size: "<<q.size()<<"\n";
    return 0;
}
