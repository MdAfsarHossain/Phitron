#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    priority_queue<int> pq;

    while (Q--)
    {
        int OP;
        cin >> OP;

        if (OP == 1)
        {
            int V;
            cin >> V;
            pq.push(V);
        }
        else if (OP == 2)
        {
            if (!pq.empty())
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}

