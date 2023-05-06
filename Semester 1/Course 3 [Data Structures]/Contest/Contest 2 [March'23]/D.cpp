#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int length = s.length();

    stack<char> st;

    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        if(now=='{')
            st.push(now);
        else
        {
            if(st.empty())
            {
                cout<<"0\n";
                return 0;
            }

            if(now=='}' && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                cout<<"0\n";
                return 0;
            }
        }
    }

    if(st.empty())
        cout<<length<<"\n";
    else
        cout<<"0\n";

    return 0;
}

