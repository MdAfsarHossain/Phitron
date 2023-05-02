#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int len = s.length();
    //cout<<len;
    int freq[27];
    for(int i=0; i<27; i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<len; i++)
    {
        freq[(s[i] - 'a') + 1]++;
    }

    int total = 0;
    for(int i=1; i<27; i++)
    {
        if(freq[i]>=1)
        {
            total++;
        }
    }

     int next=0;
    while(next!=total)
    {
        int max=-1, index=-1;
        char ch;

        for(int i=1; i<=26; i++)
        {
            if(freq[i]>max)
            {
                max = freq[i];
                ch = i+96;
                index = i;
            }
        }

        for(int i=1; i<=max; i++)
        {
            printf("%c", ch);
        }
        freq[index] = 0;
        next++;
    }

    for(int i=1; i<27; i++)
    {
        if(freq[i]>=1)
        {
            char ch;
            ch = 96 + i;
            cout<<ch<<" : "<<freq[i]<<endl;
        }
    }

}

