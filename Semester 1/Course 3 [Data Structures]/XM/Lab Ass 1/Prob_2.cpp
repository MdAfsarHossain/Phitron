#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum1=0, sum2=0, x;

    for(int i=1; i<n; i++)
    {
        cin>>x;
        sum1 += x;

    }

    sum2 = (n*(n+1))/2;

    cout<<sum2-sum1<<"\n";

    return 0;
}
