#include<bits/stdc++.h>
using namespace std;
int func()
{
    int* p = new int;
    *p = 10;
    cout<<*p<<"\n";
    cout<<p<<"\n";
//    delete p
    return *p;
}


int main()
{
//    func();
    cout<<func();
    return 0;

}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());

    int ans = 0;
    for(int i=1 ; i<=n ; i++)
        if(a[i]!=a[i-1])
            ans++;

    cout<<ans<<" "<<a[n];

    return 0;
}
*/
/**
7
3 6 5 8 2 3 4
2 3 3 4 5 6 8
//    for(int i=0; i<n; i++)
//        cout<<a[i]<<" ";
//    cout<<"\n";
//    for(int i=0; i<n; i++)
//        if(a[i] != i+1)
//            ans++;
**/

