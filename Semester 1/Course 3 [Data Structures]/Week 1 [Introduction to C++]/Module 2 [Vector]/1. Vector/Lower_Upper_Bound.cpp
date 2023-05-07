#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v {4,15,67,24,56,1,2,4,6,6,3,9};

    sort(v.begin(), v.end());  // Ascending Order

    // 1 2 3 4 4 6 6 9 15 24 56 67
    for(int val: v)
        cout<<val<<" ";
    cout<<"\n";

//    int findN;
//    cin>>findN;
    ///Lower Bound
    vector<int> :: iterator itL;
    itL = lower_bound(v.begin(), v.end(), 6);
    cout<<*itL<<"\n";
    cout<<"Lower Bound of 6: "<<(itL - v.begin())<<"\n";

    ///Upper Bound
    vector<int> :: iterator itU;
    itU = upper_bound(v.begin(), v.end(), 6);
    cout<<*itU<<"\n";
    cout<<"Upper Bound of 6: "<<(itU-v.begin())<<"\n";

    cout<<"Here 6 Occures "<<(itU-itL)<<" times\n";





    return 0;
}
