#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end)
{

    if (start >= end)
    {
        return true;
    }

    if (s[start] != s[end])
    {
        return false;
    }

    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout<< "Yes";
    else
        cout<<"No";

    return 0;
}

/**
abcba

abcaa

**/

