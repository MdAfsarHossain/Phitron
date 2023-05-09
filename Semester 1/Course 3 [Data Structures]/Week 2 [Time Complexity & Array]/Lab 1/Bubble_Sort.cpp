#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    /// Time Complexity: O(n^2)
    /// Memory Complexity: O(n)
    for(int i=0; i<n; i++)
    {
        int last = n-1-i;
        bool sorted = true;
        for(int j=0; j<=last-1; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
                sorted = false;
            }
        }
//        if(sorted)
//            break;
        cout<<"After pass "<<i<<": ";
        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}
