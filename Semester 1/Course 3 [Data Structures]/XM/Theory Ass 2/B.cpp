#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i = 0;
        int ud = 0, lr = 0;
        int c = 0;

        while(s[i] != '\0')
        {

            if(s[i] == 'U')
            {
                ud++;
//                cout<<"U = "<<ud<<"\n";
            }
            else if(s[i] == 'D')
            {
                ud--;
//                cout<<"U = "<<ud<<"\n";
            }
            else if(s[i] == 'L')
            {
                lr--;
//                cout<<"R = "<<lr<<"\n";
            }
            else if(s[i] == 'R')
            {
                lr++;
//                cout<<"R = "<<lr<<"\n";
            }

            if(ud==1 && lr==1)
            {
                cout<<"YES\n";
                c = 1;
                break;
            }
            i++;
        }
        if(c==0)
            cout<<"NO\n";
    }

    return 0;
}
/*

*/
