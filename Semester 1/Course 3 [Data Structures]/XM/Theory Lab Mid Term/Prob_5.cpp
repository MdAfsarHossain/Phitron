#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &a, int n)
{
    if (n == 1)
    {
        return a[0];
    }

    int max = findMax(a, n - 1);

    if(a[n-1]>max)
        return a[n-1];
    else
        return max;
}

int main()
{
    int n;

    cin>>n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<findMax(a, n)<<"\n";

    return 0;
}
/**
5
1 3 5 2 4


**/
