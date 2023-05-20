#include<bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '/' || ch == '*')
        return 2;
    else
        return -1;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if ((ch >= '0' && ch <= '9'))
            ans += ch;
        else if (ch == '(')
            st.push('(');
        else if (ch == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
    //cout<<ans<<"\n";
}

void calculate(string s)
{
    stack<int> st;
    int sz = s.size();
    int c = 0;
    for (int i = 0; i <sz; i++)
    {
        if (isdigit(s[i]))
            st.push(s[i] - '0');
        else
        {
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();
            if( s[i] == '+')
                st.push(num1 + num2);
            else if( s[i] == '-')
            {
                st.push(num2-num1);
            }
            else if( s[i] == '*')
                st.push(num1 * num2);
            else if( s[i] == '/')
            {
                st.push(num2/num1);
            }
            else
            {
                cout<<"Invalid Expression";
                c = 1;
                break;
            }
        }
    }
    if(c==0)
        cout<<st.top()<<"\n";
}

int main()
{
    string s;
    cin >> s;
    string ans = infixToPostfix(s);
    //cout<<ans<<"\n";

    calculate(ans);

    return 0;
}

/*
4+(5+6)*8-1
456+8*+1-
= 91
(2+4)*(5+6)
24+56+*
= 66
*/
