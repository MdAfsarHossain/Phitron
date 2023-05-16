#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 123456789;
//    int count = 0;
//
//    while(n != 0)
//    {
//        n /= 10;
//        count++;
//    }
//    cout<<count<<"\n";

    cout<<(int)log10(n)+1<<"\n";  ///O(1)

    return 0;
}
