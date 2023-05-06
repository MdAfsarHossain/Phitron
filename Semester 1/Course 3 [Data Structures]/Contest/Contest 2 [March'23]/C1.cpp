#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    stack<int> stk;
    stack<int> max_stk;

    while (Q--)
    {
        int OP;
        cin >> OP;

        if (OP == 1)
        {
            int V;
            cin >> V;
            stk.push(V); // 9 2

            if (max_stk.empty() || V >= max_stk.top())
            {
                max_stk.push(V); //9
            }
        }
        else if (OP == 2)
        {
            if (!max_stk.empty())
            {
                int max_val = max_stk.top();
                max_stk.pop();

                cout << max_val << "\n";

                if (stk.top() == max_val)
                {
                    stk.pop();
                }
            }
        }
    }

    return 0;
}

