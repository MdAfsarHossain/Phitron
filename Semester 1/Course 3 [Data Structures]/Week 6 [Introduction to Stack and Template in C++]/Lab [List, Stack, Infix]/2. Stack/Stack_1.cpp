#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    ///Push: O(1)
    st.push(10);
    st.push(20);
    st.push(30);

    ///Size
    cout<<"Stack Size: "<<st.size()<<"\n";

    ///Top: O(1)
    cout<<st.top()<<"\n";

    ///Pop: O(1)
    st.pop();
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";

    st.pop();

    cout<<"Stack Size: "<<st.size()<<"\n";

    return 0;
}
