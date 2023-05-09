#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    ///push_back()
    /*
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    */

    ///pop_back()
    ///size()
    /*
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    v.pop_back();
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    */

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ///back()
    /*
    int lastElement = v.back();
    cout<<lastElement<<"\n";
    */

    ///front()
    /*
    int firstElement = v.front();
    cout<<firstElement<<"\n";
    */

    ///clear()
    /*
    int sz = v.size();
    cout<<sz<<"\n";
    v.clear();
    sz = v.size();
    cout<<sz<<"\n";
    */

    ///empty()
    /*
    int emp = v.empty();
    cout<<emp<<"\n";
    //0 -> not empty
    //1 -> empty
    while(!v.empty())
    {
        cout<<v.back()<<"\n";
        v.pop_back();
    }
    */

    ///resize()
    /*
    v.resize(10);
    //v.resize(10, 6);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    */

    ///for each
    /*
    for(int val : v)
        cout<<val<<" ";
    */

    ///sort()
    /*
    sort(v.begin(), v.end());
    for(int val : v)
        cout<<val<<" ";
    */
    ///reverse sort
    /*
    sort(v.rbegin(), v.rend());
    for(int val : v)
        cout<<val<<" ";
    */

    ///sort
    /*
    sort(v.begin()+1, v.begin()+3); // 1 to 2
    for(int val : v)
        cout<<val<<" ";
    */

    ///max element
    /*
    int maxi = *max_element(v.begin(), v.end());
    cout<<maxi<<"\n";
    */

    ///min element
    /*
    int mini = *min_element(v.begin(), v.end());
    cout<<mini<<"\n";
    int mini = *min_element(v.begin()+1, v.begin()+4);
    cout<<mini<<"\n";
    */

    ///reverse
    reverse(v.begin(), v.end());
    for(auto val : v)
        cout<<val<<" ";

    return 0;
}
