#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(4);
    pq.push(6);
    pq.push(4);
    pq.push(10);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
