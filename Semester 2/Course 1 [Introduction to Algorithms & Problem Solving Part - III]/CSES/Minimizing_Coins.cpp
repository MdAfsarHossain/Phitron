// https://cses.fi/problemset/task/1634
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin>>n>>x;

    vector<int> coins(n);
    for(int i=0; i<n; i++)
        cin>>coins[i];

    vector<long long> numberOfCoins(x+1, INT_MAX);

    numberOfCoins[0] = 0;

    for(int i=1; i<=x; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i - coins[j] >= 0)
            {
                numberOfCoins[i] = min(numberOfCoins[i], numberOfCoins[i - coins[j]] + 1);
            }
        }
    }
    if(numberOfCoins[x] != INT_MAX)
        cout<<numberOfCoins[x]<<"\n";
    else
        cout<<-1<<"\n";

    return 0;
}
