#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int x, y;
    x = n - 1;
    y = n - 2;

    ll sum = pow(2,x) * pow(2,y);
    if(n==1)
        cout<<1<<"\n";
    else
        cout<<sum<<"\n";


//    cout<<"\n";

    return 0;
}


