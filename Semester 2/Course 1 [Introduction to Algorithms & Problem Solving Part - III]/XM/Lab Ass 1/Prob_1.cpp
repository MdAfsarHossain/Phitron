#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes;
    cin>>nodes;

    int matrix[nodes][nodes];

    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<nodes; i++)
    {
        cout<<i<<": ";
        for(int j=0; j<nodes; j++)
        {
            if(matrix[i][j] == 1)
            {
                cout<<j<<" ";
            }
       }
        cout<<"\n";
    }

    return 0;
}

/**
6
0 1 1 0 0 0
1 0 0 1 1 0
1 0 0 0 0 1
0 1 0 0 1 1
0 1 0 1 0 0
0 0 1 1 0 0

0: 1 2
1: 0 3 4
2: 0 5
3: 1 4 5
4: 1 3
5: 2 3
**/
