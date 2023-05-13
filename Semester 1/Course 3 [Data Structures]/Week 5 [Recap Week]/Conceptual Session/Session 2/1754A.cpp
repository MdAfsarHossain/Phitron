#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        stack<char> q_st;

        for(int i=0; i<n; i++)
        {
            char ch = s[i];
            if(ch == 'Q')
                q_st.push(ch);
            else
            {
                if(!q_st.empty())
                {
                    q_st.pop();
                }
            }
        }

        if(q_st.empty())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
