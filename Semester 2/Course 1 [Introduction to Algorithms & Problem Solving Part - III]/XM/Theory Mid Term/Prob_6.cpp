#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n, m, start_x, start_y, visited[MAXN][MAXN], dist[MAXN][MAXN];
char maze[MAXN][MAXN], prev_move[MAXN][MAXN];
queue<pair<int, int>> q;

int dx[] = {-1, 0, 1, 0}; // directions
int dy[] = {0, 1, 0, -1};

void bfs()
{
    q.push({start_x, start_y});
    visited[start_x][start_y] = 1;
    while(!q.empty())
    {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || maze[nx][ny] == '#' || maze[nx][ny] == 'M')
            {
                continue;
            }
            visited[nx][ny] = 1;
            dist[nx][ny] = dist[x][y] + 1;
            prev_move[nx][ny] = i;
            q.push({nx, ny});
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> maze[i][j];
            if(maze[i][j] == 'A')
            {
                start_x = i;
                start_y = j;
            }
        }
    }
    bfs();
    if(!visited[0][start_y] || !visited[n-1][start_y] || !visited[start_x][0] || !visited[start_x][m-1])
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        int x = start_x, y = start_y;
        while(maze[x][y] != '.')
        {
            int move = prev_move[x][y];
            if(move == 0)
            {
                cout << "U";
                x--;
            }
            else if(move == 1)
            {
                cout << "R";
                y++;
            }
            else if(move == 2)
            {
                cout << "D";
                x++;
            }
            else if(move == 3)
            {
                cout << "L";
                y--;
            }
        }
        cout << "\n";
    }
    return 0;
}

