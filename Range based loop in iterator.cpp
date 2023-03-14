#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5,6,7};
   ////print using vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    ////print using iterators
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    ////print using range based loop
    for(int value:v)
    {
        cout<<value<<" ";
    }
}
