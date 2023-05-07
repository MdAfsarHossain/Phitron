#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int *x = new int;
    *x = 10;
    cout<<x<<"\n";
    cout<<*x<<"\n";
    delete x;
    */

    int n;
    cin>>n;

    int *ara = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }

    delete[] ara;
//    delete x;

    return 0;
}