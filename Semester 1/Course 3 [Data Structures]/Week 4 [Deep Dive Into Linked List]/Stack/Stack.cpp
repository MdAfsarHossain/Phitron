#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> numst;

    numst.push(10);
    numst.push(20);
    numst.push(30);
    numst.push(40);
    numst.push(50);

//    cout<<numst.top()<<"\n";
//    numst.pop();
//    cout<<numst.top()<<"\n";

//    if(numst.empty() == false)
//        numst.pop();
//    cout<<numst.top()<<"\n";
    cout<<numst.empty()<<"\n";

    while(numst.empty() == false)
    {
        cout<<numst.top()<<" ";
        numst.pop();
    }

    cout<<"\n"<<numst.empty()<<"\n";

    return 0;
}
