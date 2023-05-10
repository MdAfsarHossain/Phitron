#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ara(n);
    for(int i=0; i<n; i++)
        cin>>ara[i];

    sort(ara.begin(), ara.end());

    for(int i=0; i<n; i++)
        cout<<ara[i]<<" ";
    cout<<"\n";

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int low = 0, high = n-1;

        bool flag = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;

            if(ara[mid] == x)
            {
                cout<<"YES\n";
                flag = 1;
                break;
            }
            if(ara[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if(flag == 0)
            cout<<"NO\n";
    }

    return 0;
}
