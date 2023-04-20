/**
https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m;
    cin>>n>>m;

    ll ara1[n+1], ara2[m+1];

    for(ll i=0; i<n; i++)
    {
        cin>>ara1[i];
    }

    for(ll j=0; j<m; j++)
    {
        cin>>ara2[j];
    }

    sort(ara1, ara1+n);
    sort(ara2, ara2+m);

    for(ll i=0, j=0; i<m-1; i++, j++)
    {
        if(ara1[i] < ara2[j])
            cout<<ara1[i]<<" "<<ara2[j]<<" ";
        else
            cout<<ara2[j]<<" "<<ara1[i]<<" ";
    }

    if(n<m)
        cout<<ara2[m-1]<<endl;
    else
        cout<<ara1[n-1]<<endl;
}
