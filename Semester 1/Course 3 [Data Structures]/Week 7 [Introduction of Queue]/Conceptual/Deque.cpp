#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> dq;

    for(int i=1; i<=5; i++)
    {
        int in;
        cin>>in;
        dq.push_back(in);
    }

    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }

    return 0;
}

