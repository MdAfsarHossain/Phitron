#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "9999999999";
    int sum = 0;

    int i = 0;
    while(s[i] != '\0')
    {
        int num;
        num = s[i] - '0';
        sum += num;
        i++;
    }
    cout<<sum<<"\n";

    return 0;
}
