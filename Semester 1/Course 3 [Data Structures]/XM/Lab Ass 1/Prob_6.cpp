#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int target;
    cin>>target;

    int countN = 0;
    int low = 0;
    int high = a.size()-1;

    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(a[mid] == target)
        {
            high = mid - 1;
            countN++;
            if(a[mid-1]==target || a[mid+1]==target)
            {
                countN++;
            }
        }
        else if(a[mid] < target)
        {
            low = mid + 1;
        }
        else if(a[mid] > target)
        {
            high = mid - 1;
        }
    }

    if(countN > 1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

