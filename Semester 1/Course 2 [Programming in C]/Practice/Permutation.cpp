#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    while(cin>>n)
    {
        for(a=1; a<=n; a++)
        {
            for(b=1; b<=n; b++)
            {
                if(b!=a)
                {
                    for(c=1; c<=n; c++)
                    {
                        if(c!=b && c!=a)
                        {
                            cout<<a<<", "<<b<<", "<<c<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
