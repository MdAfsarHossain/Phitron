/**
https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
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

    for(ll i=0; i<m; i++)
    {
        cin>>ara2[i];
    }

    ll cnt;
    for(ll i=0; i<m; i++)
    {
        cnt = 0;
        for(ll j=0; j<n; j++)
        {
            if(ara2[i] > ara1[j])
                cnt++;
        }
        cout<<cnt<<" ";
    }
}
