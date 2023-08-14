#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
const long long INF = 1e18;
long long d[N][N];

int main()
{
    int n, m, q;
    cin>>n>>m>>q;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            d[i][j] = INF;
        }
    }

    for(int i=1; i<=n; i++)
    {
        d[i][i] = 0;
    }

    for(int i=0; i<m; i++)
    {
        int u, v;
        long long w;

        cin>>u>>v>>w;

        d[u][v] = min(d[u][v], w);
        d[v][u] = min(d[v][u], w);
    }

    for(int k=1; k<=n; k++)
    {
        for(int u=1; u<=n; u++)
        {
            for(int v=1; v<=n; v++)
            {
                d[u][v] = min(d[u][v], d[u][k]+d[k][v]);
            }
        }
    }

    for(int i=0; i<q; i++)
    {
        int u, v;
        cin>>u>>v;

        if(d[u][v] == INF)
            cout<<-1<<"\n";
        else
            cout<<d[u][v]<<"\n";
    }

    return 0;
}
/**
5 5 6
1 2 5
1 3 9
2 3 3
1 4 7
3 4 4
1 2
2 1
1 3
1 4
3 2
1 5

5
5
8
7
3
-1
-------
10 10 10
4 6 2
1 3 9
6 10 3
5 7 8
6 8 10
1 5 2
7 9 2
2 6 10
2 4 6
8 10 8
9 6
9 4
9 8
8 10
5 7
10 9
9 10
10 7
8 4
2 4

-1
-1
-1
8
8
-1
-1
-1
12
6
---------
**/
