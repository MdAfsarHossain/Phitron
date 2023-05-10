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
    {
        for(int j=0; j<m; j++)
        {
            if(ara1[i] == ara2[j])
                cout<<ara1[i]<<" ";
        }
    }

    return 0;
}
