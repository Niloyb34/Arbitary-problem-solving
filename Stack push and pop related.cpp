#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>st;
    string res;
    int n,i;///size of stack is n
    char x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        res=st.top()+res; ///mane res=res+st.top() mane res=res+st.top()
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}
