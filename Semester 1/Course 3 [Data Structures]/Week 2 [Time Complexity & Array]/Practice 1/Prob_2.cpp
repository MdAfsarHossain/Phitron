#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int mul = 1;
    for(int i=0; i<n; i++)
    {
        if(i%2==1)
        {
            mul *= ara[i];
        }
    }

    cout<<mul<<"\n";

    return 0;
}
