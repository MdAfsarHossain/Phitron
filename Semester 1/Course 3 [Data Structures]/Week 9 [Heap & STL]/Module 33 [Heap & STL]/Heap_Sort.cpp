#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int> nodes;
    MaxHeap()
    {

    }

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

    void build_from_array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2 - 1;
        for(int i=last_non_leaf; i>=0; i--)
        {
            down_heapify(i);
        }
    }

    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
};

///O(nlogn)
vector<int> heap_sort(vector<int> a)
{
    MaxHeap h;
    h.build_from_array(a);

    vector<int> ans;
    for(int i=0; i<a.size(); i++)
    {
        ans.push_back(h.ExtractMax());
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int>a = {1, 2, 3, 4, 10, 9, 8, 7};

    vector<int> sorted_a = heap_sort(a);
    for(int i=0; i<sorted_a.size(); i++)
    {
        cout<<sorted_a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
