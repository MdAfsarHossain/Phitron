#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int visited[N][N];

int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int n;
int ax, ay;

bool is_valid(int x, int y)
{
    if(x<1 || x>n || y<1 || y>n)
    {
        return false;
    }

    if(visited[x][y])
    {
        return false;
    }

    if(x==ax || y==ay || abs(x-ax) == abs(y-ay))
    {
        return false;
    }

    return true;
}

bool BFS(int bx, int by, int cx, int cy)
{
    queue<pair<int, int>> q;
    q.push({bx, by});

    visited[bx][by] = 1;

    while(!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();

        if(head.first == cx && head.second == cy)
        {
            return true;
        }

        for(int i=0; i<8; i++)
        {
            int nx = head.first + dx[i];
            int ny = head.second + dy[i];

            if(is_valid(nx, ny))
            {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }

    return false;
}

int main()
{
    cin>>n;

    int bx, by, cx, cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    if(BFS(bx, by, cx, cy))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
