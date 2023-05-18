#include<bits/stdc++.h>
using namespace std;

class DeleteHeap{
public:
    vector<int> nodes;

    DeleteHeap()
    {

    }

    ///O(logn)
    void up_heapify(int idx)
    {
        while(idx>0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }

    ///O(logn)
    void Insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }

    ///O(n)
    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    ///O(logn)
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
                largest = l;
            if(r<nodes.size() && nodes[largest] < nodes[r])
                largest = r;

            if(largest == idx)
                break;

            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }

    ///O(logn)
    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!";
            return -1;
        }
        return nodes[0];
    }

};

int main()
{
    DeleteHeap heap;

    heap.Insert(4);
    heap.Insert(7);
    heap.Insert(9);
    heap.Insert(1);
    heap.Insert(10);
    heap.Insert(20);
    heap.Insert(30);

    heap.PrintHeap();
    cout<<"Max Element = "<<heap.getMax()<<"\n";
    heap.Delete(0);
    heap.PrintHeap();
    cout<<"Max Element = "<<heap.getMax()<<"\n";

    return 0;
}
