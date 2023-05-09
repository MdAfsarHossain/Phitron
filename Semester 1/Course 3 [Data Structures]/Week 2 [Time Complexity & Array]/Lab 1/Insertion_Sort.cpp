#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    ///Time Complexity: O(n^2)
    ///Memory Complexity: O(n)
    for(int i=1; i<n; i++)
    {
        int idx = i;
        while(idx>=1)
        {
            if(v[idx-1] > v[idx])
            {
                swap(v[idx-1], v[idx]);
                idx--;
            }
            else
                break;
        }
        cout<<"Considering "<<i<<": ";
        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
