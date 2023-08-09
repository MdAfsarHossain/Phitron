#include<bits/stdc++.h>
using namespace std;

const int maxN = 1010;
int _parent_[maxN];
int _rank_[maxN];

int _find_(int node)
{
    if(node == _parent_[node])
        return node;
    int x = _find_(_parent_[node]);
    _parent_[node] = x;
    return _parent_[node];
}

void _union_(int a, int b)
{
    a = _find_(a);
    b = _find_(b);

    if(_rank_[a] < _rank_[b])
        _parent_[a] = b;
    else if(_rank_[b] < _rank_[a])
        _parent_[b] = a;
    else
    {
        _parent_[b] = a;
        _rank_[a]++;
    }
}

int main()
{
    for(int i=0; i<maxN; i++)
        _parent_[i] = i;

    int n, m;
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int u, v;
        cin>>u>>v;

        _union_(u, v);
    }

    cout<<"Rank:\n";
    for(int i=1; i<=n; i++)
        cout<<_rank_[i]<<" ";

    cout<<"\nParent:\n";
    for(int i=1; i<=n; i++)
        cout<<_parent_[i]<<" ";
    cout<<"\n";

    return 0;
}

/**
7 6
1 2
2 3
4 5
6 7
5 6
3 7

**/
