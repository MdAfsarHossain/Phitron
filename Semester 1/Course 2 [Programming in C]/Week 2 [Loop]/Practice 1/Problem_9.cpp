#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int mid = (n+1) / 2;
    int last = n;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            cout<<mid<<" ";
            mid--;
        }
        else
        {
            cout<<last<<" ";
            last--;
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
