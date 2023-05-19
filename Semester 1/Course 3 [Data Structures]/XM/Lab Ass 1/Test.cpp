#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    ///CODE

}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int x;
    cin>>x;
    int cnt = 0;

    /// Merge sort
    /// Time Complexity: O(nlogn)

    for(int i=0; i<n; i++)
    {
        /// Time complexity: O(n)
        if(a[i] == x)
            cnt++;
    }
    return 0;
}
