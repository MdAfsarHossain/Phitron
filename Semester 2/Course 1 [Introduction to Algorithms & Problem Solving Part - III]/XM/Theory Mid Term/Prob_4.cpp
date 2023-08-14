#include<bits/stdc++.h>
using namespace std;

int totalSum(vector<int> v, int n)
{
    if(n==1)
    {
        return v[0];
    }
    else
    {
        return v[n-1] + totalSum(v, n-1);
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    int sum = totalSum(v, n);
    cout<<sum<<"\n";

    return 0;
}
