#include<bits/stdc++.h>
using namespace std;

vector<int> a[1005];
bool visited[1005][1005];

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

bool isValid(int x, int y, int n, int m)
{
    return (x>-1 and x<n and y>-1 and y<m and !visited[x][y] and a[x][y]!=0);
}

int DFS(int x, int y, int n, int m)
{
    int res = a[x][y];
    visited[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int tx = x + dx[i];
        int ty = y + dy[i];

        if(isValid(tx, ty, n, m))
        {
            res += DFS(tx, ty, n, m);
        }
    }

    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        for(int i=0; i<n; i++)
        {
            a[i].assign(m, 0);
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                visited[i][j] = false;
            }
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(visited[i][j] or a[i][j]==0)
                    continue;
                ans = max(ans, DFS(i, j, n, m));
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
