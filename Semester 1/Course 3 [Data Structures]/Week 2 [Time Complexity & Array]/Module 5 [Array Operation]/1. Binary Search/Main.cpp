#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;

    vector<int>ara(n);
    for(int i=0; i<n; i++)
        cin>>ara[i];

    sort(ara.begin(), ara.end());

    int low = 0, high = n-1;

    bool flag = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        cout<<"Low = "<<low<<" High = "<<high<<" Mid = "<<mid<<"\n";
        if(ara[mid] == k)
        {
            cout<<"Found "<<mid;
            flag = 1;
            break;
        }
        if(ara[mid] > k)
            high = mid - 1;
        //if(ara[mid] < k)
        else
            low = mid + 1;
    }

    if(flag == 0)
        cout<<"NO";

    return 0;
}
