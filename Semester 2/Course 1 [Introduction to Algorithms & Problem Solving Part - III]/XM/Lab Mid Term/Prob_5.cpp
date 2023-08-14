#include<bits/stdc++.h>
using namespace std;

const int N = 2002;
int maze[N][N], visited[N][N];
int n, m;
int room_no;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;

    if(x>=0 && x<n && y>=0 && y<m)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;

    if(maze[x][y] == -1)
    {
        return false;
    }
    return true;
}

void BFS(pair<int, int> src)
{
    room_no = 1;
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;

    q.push(src);

    while(!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;

        for(int i=0; i<4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int> adj_node = {new_x, new_y};

            if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
            {
                visited[new_x][new_y] = 1;
                q.push(adj_node);
                room_no++;
            }
        }
    }
}

int main()
{
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        string input;
        cin>>input;

        for(int j=0; j<m; j++)
        {
            if(input[j] == '#')
            {
                maze[i][j] = -1;
            }
        }
    }

    int room_cnt = 0;
    int f_room_no = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(maze[i][j] == 0 && !visited[i][j])
            {
                BFS({i, j});
                room_cnt++;
                f_room_no = max(f_room_no, room_no);
            }
        }
    }

    cout<<"Rooms - "<<room_cnt<<"\n";
    cout<<"Length of the longest room - "<<f_room_no<<"\n";

    return 0;
}

/**
5 8
########
#..#...#
#.##.#.#
.#.#...#
#.######

Rooms - 5
Length of the longest room - 8
**/
