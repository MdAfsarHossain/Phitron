#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    stack<char> st;
    int cnt = 0;

    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(ch == '(')
            st.push(ch);
        else if(ch == ')' && st.empty() == false && st.top() == '(')
        {
            st.pop();
            cnt++;
        }
        else
            st.push(ch);
    }

    cout<<cnt*2;

    return 0;
}
