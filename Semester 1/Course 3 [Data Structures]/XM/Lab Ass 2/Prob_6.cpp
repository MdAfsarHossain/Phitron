#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    deque<char> dq;

    int i = 0;
    while(s[i] != '\0')
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            dq.push_back(s[i]);
        }
        i++;
    }

    int flag = 0;
    while(dq.size() > 1)
    {
        if(dq.front() != dq.back())
        {
            flag = 1;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }

    if(flag == 0)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0;
}
