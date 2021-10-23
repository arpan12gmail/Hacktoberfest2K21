#include<iostream>
using namespace std;
#define n 100

class stack {
    public:
    int top;
    int* arr; // dynamicall allocate
  

    stack()
    {
        top =-1;
        arr = new int[n];
    }

    void push(int x)
    {
        if(top == n-1 )
        {
             cout<<"STACK IS OVERFLOW"<<endl;
             return ;
        }
        else 
        {
            top++;
            arr[top]=x;
        }
    }

    void pop()
    {
        if(top == -1 )
        {
            cout<<"no elemeent to pop "<<endl;
            return ;
        }
        else 
        {
            top--;
        }
    }
    int Top()
    {
        if(top == -1)
        {
            cout<<"NO elemnt in the stack "<<endl;
        }
        return  arr[top];
    }

    bool empty()
    {
        return (top == -1);
    }
} ;
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty();
    return 0;
}