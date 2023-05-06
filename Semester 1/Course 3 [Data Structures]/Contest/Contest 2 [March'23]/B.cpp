#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    cin>>s;

    ll odd, even;
    odd = even = 0;
    ll i =0;

    while(s[i] != '\0')
    {
        if(i%2==0)
            even += s[i] - '0';
        else
            odd += s[i] - '0';
        i++;
    }

    ll sum;
    sum = abs(odd-even);

    if(sum%11==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

//    cout<<sum;

//    cout<<even<<" "<<odd<<"\n";

//    cout<<"\n";

    return 0;
}


