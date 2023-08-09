#include<bits/stdc++.h>
using namespace std;

long long ara[103];

long long fib(int n)
{
    if(n<=2)
        return 1;
    if(ara[n] != 0)
        return ara[n];

    ara[n] = fib(n-1) + fib(n-2);
    return ara[n];
}

int main()
{
    cout<<fib(3)<<"\n";
    cout<<fib(5)<<"\n";
    cout<<fib(50)<<"\n";

    return 0;
}

/**
1 2 3 4 5 6 7 8 9 10
--------------------
1 1 2 3 5 8 13 21 35
**/
