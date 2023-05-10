#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    cin>>ch;

    int i = 0;
    while(ch[i] != '\0')
    {
        if(i%2==0)
        {
            if(ch[i] == 'z')
                ch[i] -= 25;
            else
                ch[i] += 1;
        }
        i++;
    }

    cout<<ch;

    return 0;
}

/// 122 - 97 = 25
/// 122 - 25 = 97
