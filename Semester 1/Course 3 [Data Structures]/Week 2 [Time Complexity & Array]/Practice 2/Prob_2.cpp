#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> ara(n);
    for(int i=0; i<n; i++)
        cin>>ara[i];
    int k;
    cin>>k;
    int x;
    for(int i=0; i<k; i++)
    {
        cin>>x;
        bool flag = 0;
        for(int j=0; j<n; j++)
        {
            if(ara[j] == x)
            {
                cout<<"YES\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout<<"NO\n";
    }

    return 0;
}
