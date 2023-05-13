/**
https://leetcode.com/problems/valid-parentheses/description/
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;

    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else if(ch == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else if(ch == '}' && !st.empty() && st.top() == '{')
        {
            st.pop();
        }
        else if(ch == ']' && !st.empty() && st.top() == '[')
        {
            st.pop();
        }
        else
            st.push(ch);
    }

    if(st.empty())
        cout<<"valid";
    else
        cout<<"invalid";

    return 0;
}

