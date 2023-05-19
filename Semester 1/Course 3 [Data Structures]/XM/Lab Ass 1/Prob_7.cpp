#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int> b;
    int x, y;
    cin>>x>>y;

    for(int i=0; i<n; i++)
    {
        if(x==i+1 && x<=y)
        {
            x++;
            continue;
        }
        b.push_back(a[i]);
    }

    for(int i=0; i<b.size(); i++)
        cout<<b[i]<<" ";

    return 0;
}

/**
6
1 4 6 2 8 7
2 4
1 8 7
**/
