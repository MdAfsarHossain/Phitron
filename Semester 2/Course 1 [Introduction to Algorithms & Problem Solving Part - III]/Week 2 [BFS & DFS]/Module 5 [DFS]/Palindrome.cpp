#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    int n = s.size();
    int l = 0, r = n-1;

    while(l<r)
    {
        if(s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;

    if(is_palindrome(s))
        cout<<s<<" is palindrome!";
    else
        cout<<s<<" is not palindrome!";

    return 0;
}

