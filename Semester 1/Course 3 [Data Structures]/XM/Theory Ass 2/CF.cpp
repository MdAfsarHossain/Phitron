#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        int i=0;
        string s = "codeforces";

        int c = 0;
        while(s[i] != '\0')
        {
            if(ch == s[i])
            {
                cout<<"YES\n";
                c = 1;
                break;
            }
            i++;
        }

        if(c==0)
            cout<<"NO\n";
    }
    return 0;
}
