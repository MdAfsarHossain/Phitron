#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int> l;

        for(int i=1; i<=(n*n); i++)
            l.push_back(i);
        int grid[n][n];

        for(int i=0; i<n; i++)
        {
            if((i+1)%2 != 0)
            {
                for(int j=0; j<n; j++)
                {
                    if((j+1)%2 != 0)
                    {
                        grid[i][j] = l.back();
                        l.pop_back();
                    }
                    else
                    {
                        grid[i][j] = l.front();
                        l.pop_front();
                    }
                }
            }
            else
            {
                for(int j=n-1; j>=0; j--)
                {
                    if((j+1) % 2 != 0)
                    {
                        grid[i][j] = l.front();
                        l.pop_front();
                    }
                    else
                    {
                        grid[i][j] = l.back();
                        l.pop_back();
                    }
                }
            }

        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
