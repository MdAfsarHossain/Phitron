#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    cin>>n;
    int ara1[n];
    for(int i=0; i<n; i++)
        cin>>ara1[i];

    cin>>m;
    int ara2[m];
    for(int i=0; i<m; i++)
        cin>>ara2[i];

    for(int i=0; i<n; i++)
        cout<<ara1[i]<<" ";

    for(int i=0; i<m; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(ara2[i] == ara1[j])
                cnt++;
        }
        if(cnt == 0)
            cout<<ara2[i]<<" ";
    }

    return 0;
}
