#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int *ara;
    int start;
    int end;
    int size;
    int currentSize;
public:

    Queue(int size)
    {
        ara = new int[size];
        start = 0;
        end = -1;
        this->size = size;
        currentSize = 0;

    }

    void ENQUEUE(int val)
    {
        if(currentSize == size)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        end++;
        end = end%size;
        ara[end] = val;
        currentSize++;
    }

    void DEQUEUE()
    {
        if(currentSize == 0)
        {
            cout<<"Queue is empty!\n";
            return;
        }
        start++;
        start = start % size;
        currentSize--;
    }

    int GETSIZE()
    {
        return currentSize;
    }

    int FRONT()
    {
        if(currentSize == 0)
            return -1;
        return ara[start];
    }

};

int main()
{
    Queue q(5);
    q.ENQUEUE(10);
    q.ENQUEUE(20);
    q.ENQUEUE(30);

    cout<<q.GETSIZE()<<"\n";
    cout<<q.FRONT()<<"\n";

    q.DEQUEUE();

    cout<<q.FRONT()<<"\n";
    cout<<q.GETSIZE()<<"\n";

    return 0;
}
