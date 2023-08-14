#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    map<char, int> freq;

    for(char c: s)
    {
        freq[c]++;
    }

    int oddFreq = 0;
    for(auto x : freq)
    {
        if(x.second % 2 ==1)
            oddFreq++;
        if(oddFreq > 1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

    return 0;
}

/**
babdakkiikkii
YES
abbfkbifkppkplab
NO
amadm
YES
**/
