#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ln = s.length();

        queue<char> q; // R

        if(n == 1)
        {
            int i = 0;
            char ch = s[i];
            q.push(ch);
        }
        else
        {

            for(int i=1; i<n; i++)
            {
                char ch1 = s[i-1];   // R
                char ch2 = s[i];     // B
//            cout<<ch1<<" "<<ch2<<"\n";
                if(ch1 == ch2)
                {
                    if(i+1==n-1)
                    {
                        q.push(s[i+1]);
                        break;
                    }
                    i++;
                }
                else
                {
                    if((ch1 == 'R' && ch2 == 'B') || (ch1 == 'B' && ch2 == 'R'))
                    {
                        if(q.empty() || (q.back() != 'P'))
                            q.push('P');
                        else
                            q.pop();
                        if(i+1==n-1)
                        {
                            q.push(s[i+1]);
                            break;
                        }
                        i++;
                    }
                    else if((ch1 == 'R' && ch2 == 'G') || (ch1 == 'G' && ch2 == 'R'))
                    {
                        if(q.empty() || (q.back() != 'Y'))
                            q.push('Y');
                        else
                            q.pop();
                        if(i+1==n-1)
                        {
                            q.push(s[i+1]);
                            break;
                        }
                        i++;
                    }
                    else if((ch1 == 'B' && ch2 == 'G') || (ch1 == 'G' && ch2 == 'B'))
                    {
                        if(q.empty() || (q.back() != 'C'))
                            q.push('C');
                        else
                            q.pop();
                        if(i+1==n-1)
                        {
                            q.push(s[i+1]);
                            break;
                        }
                        i++;
                    }
                }
            }
        }

        while(!q.empty())
        {
            cout<<q.front();
            q.pop();
        }
        cout<<"\n";
    }

//    cin>>n;

//    cout<<"\n";

    return 0;
}


