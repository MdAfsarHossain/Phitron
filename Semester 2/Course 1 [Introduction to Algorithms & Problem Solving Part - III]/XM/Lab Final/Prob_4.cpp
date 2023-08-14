#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
const int M = 2e5 + 1;
pii p[M];
int n, x;

int findTarget(int val)
{
    int l = 1;
    int r = n;

    while(l<=r)
    {
        int m = l + (r-l) / 2;

        if(p[m].first == val)
            return p[m].second;
        else if(p[m].first<val)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    cin>>n>>x;

    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        p[i] = {a, i};
    }

    sort(p+1, p+n+1);

    for(int i=1; i<=n; i++)
    {
        int y = findTarget(x - p[i].first);

        if(y != -1 && y != p[i].second)
        {
            cout<<y<<" "<<p[i].second<<"\n";
            return 0;
        }
    }

    cout<<"IMPOSSIBLE\n";

    return 0;
}
