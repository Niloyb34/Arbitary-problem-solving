//Find the number of unique elements and print the unique elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,n;
    vector<int>str;
    vector<int>temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        str.push_back(x);
    }
    for(i=0; i<str.size(); i++)
    {
        for(j=0; j<str.size(); j++)
        {
            if(str[i]==str[j])
            {
                break;
            }
        }
        if(i==j)
        {
            temp.push_back(str[i]);
        }
    }
    cout<<"Number of unique elements is:"<<temp.size()<<endl;
    cout<<"The unique elements are  :  "<<endl;
    for(i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}
