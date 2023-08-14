#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int visited[N][N];

int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int n;
int ax, ay;

bool DFS(int bx, int by, int cx, int cy)
{
    if(bx==cx && by==cy)
    {
        return true;
    }

    visited[bx][by] = 1;

    for(int i=0; i<8; i++)
    {
        int nx = bx + dx[i];
        int ny = by + dy[i];

        if(nx>=1 && nx<=n && ny>=1 && ny<=n && !visited[nx][ny] && !(nx==ax || ny==ay || abs(nx-ax) == abs(ny-ay)))
        {
            if(DFS(nx, ny, cx, cy))
            {
                return true;
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

    if(DFS(bx, by, cx, cy))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

