#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    ///base case
    if(a.size()<=1)
        return a;

    int mid = a.size()/2;

    vector<int> b;
    vector<int> c;
    for(int i=0; i<mid; i++)
        b.push_back(a[i]);

    for(int i=mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }

    return sorted_a;

}

int main()
{
    int m;
    cin>>m;
    vector<int> a(m);
    for(int i=0; i<m; i++)
        cin>>a[i];

    int n;
    cin>>n;
    vector<int> b(n);
    for(int i=0; i<n; i++)
        cin>>b[i];

    vector<int> ans1 = merge_sort(a);
    vector<int> ans2 = merge_sort(b);

    int z = 0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(ans2[i] == ans1[z])
        {
            cnt++;
            z++;
        }
    }

    if(cnt == m)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

/**
3
7 2 3
5
7 6 3 2 1
YES

3
1 2 3
3
3 2 1
YES

3
1 2 4
3
3 2 1
NO
**/

