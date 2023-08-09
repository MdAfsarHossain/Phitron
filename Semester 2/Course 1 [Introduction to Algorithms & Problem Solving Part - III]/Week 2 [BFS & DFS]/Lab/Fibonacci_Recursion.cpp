#include<bits/stdc++.h>
using namespace std;
/**
0, 1, 1, 2, 3, 5, 8, 13, 21 ->Fib num
0, 1, 2, 3, 4 ,5 ,6 , 7,  8 -> Index
**/

int fibonacci(int n)
{
    //Base base
    if(n == 0) return 0;
    if(n == 1) return 1;

    //general case
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<"\n";

    return 0;
}
