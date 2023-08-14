#include<bits/stdc++.h>
using namespace std;

const int maxN = 1000;
char grid[maxN][maxN];
bool visited[maxN][maxN];

pair<int, int> parent[maxN][maxN];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char dir[4] = {'D', 'R', 'U', 'L'};

void BFS(int x, int y, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({x, y});

    visited[x][y] = true;
    parent[x][y] = {-1, -1};

    while(!q.empty())
    {
        pair<int, int> u = q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            int dx_, dy_;
            dx_ = u.first + dx[i];
            dy_ = u.second + dy[i];

            if(dx_>=1 && dx_<=n && dy_>=1 && dy_<=m && !visited[dx_][dy_] && grid[dx_][dy_] != '#' && grid[dx_][dy_] != 'M')
            {
                visited[dx_][dy_] = true;
                q.push({dx_, dy_});
                parent[dx_][dy_] = u;
            }

        }
    }
}

void printSolution(int end_x, int end_y)
{
    cout<<"YES\n";

    vector<pair<int, int>> path;
    path.push_back({end_x, end_y});

    int x = end_x, y = end_y;

    while(parent[x][y] != make_pair(-1,-1))
    {
        pair<int, int> p = parent[x][y];
        x = p.first, y = p.second;
        path.push_back({x, y});
    }

    reverse(path.begin(), path.end());

    string ans;

    for(int i=0; i<path.size()-1; i++)
    {
        for(int j=0; j<4; j++)
        {
            int dx_, dy_;
            dx_ = path[i].first + dx[j];
            dy_ = path[i].second + dy[j];

            if(dx_==path[i+1].first && dy_==path[i+1].second)
            {
                ans.push_back(dir[j]);
                break;
            }
        }
    }

    cout<<ans.size()<<"\n";
    cout<<ans<<"\n";
}


int main()
{
    int n, m;
    cin>>n>>m;

    int start_x, start_y, end_x, end_y;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>grid[i][j];

            if(grid[i][j] == 'A')
            {
                start_x = i;
                start_y = j;
            }
        }
    }

    BFS(start_x, start_y, n, m);

    for(int i=1; i<=n; i++)
    {
        if(grid[i][1]!='#' && grid[i][1]!= 'M' && visited[i][1])
        {
            printSolution(i, 1);
            return 0;
        }
        else if(grid[i][m]!='#'  && grid[i][m]!='M' && visited[i][m])
        {
            printSolution(i, m);
            return 0;
        }
    }


    for(int i=1; i<=m; i++)
    {
        if(grid[1][i]!='#' && grid[1][i]!= 'M' && visited[1][i])
        {
            printSolution(1, i);
            return 0;
        }
        else if(grid[n][i]!='#'  && grid[n][i]!='M' && visited[n][i])
        {
            printSolution(n, i);
            return 0;
        }
    }

    cout<<"NO\n";

    return 0;
}

/**
Example

5 8
..######
#M..A..#
#.#.M#.#
#M#..#..
..#.####

YES
5
RRDDR

Input:
5 8
########
#.A#...#
#.##.#B#
#......#
########

Output:
YES
9
LDDRRRRRU
**/

