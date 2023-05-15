#include<bits/stdc++.h>
using namespace std;

template <class T>
class Stack{
public:
    T* a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new T[1];
        stack_size = 0;
        array_cap = 1;

    }

    ///Makes the array cap multiplied by 2
    void Increase_size()
    {
        T* tmp;
        tmp = new T[array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete []tmp;
        array_cap *= 2;
    }

    ///Add an element in the stack. O(1)
    void Push(T val)
    {
        if(stack_size+1 > array_cap)
        {
            Increase_size();
        }
        stack_size += 1;
        a[stack_size - 1] = val;
    }

    ///Delete the top most element from the stack. O(1)
    void Pop()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        a[stack_size-1] = 0;
        stack_size--;
    }

    ///Returns the top element from the stack. O(1)
    T Top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
//            assert(false);
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack <double> st;

    st.Push(3.5);
    st.Push(3.6);
    st.Push(3.8);

    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";

    Stack <char> st2;

    st2.Push('A');
    st2.Push('f');
    st2.Push('s');

    cout<<st2.Top()<<"\n";
    st2.Pop();
    cout<<st2.Top()<<"\n";
    st2.Pop();
    cout<<st2.Top()<<"\n";
    st2.Pop();
    cout<<st2.Top()<<"\n";

    return 0;
}
