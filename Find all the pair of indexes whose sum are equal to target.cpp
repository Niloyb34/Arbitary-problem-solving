///Array er jesmosto index er jogfol target er sman asbe tader everyone ke dekabe
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int t,n,i,j;
    vector<int>result;
    int x;
    cout<<"Enter nums size: ";
    cin>>n;
    cout<<"Enter the target :";
    cin>>t;
    for(i=0; i<n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            int sum=nums[i]+nums[j];
            if(t==sum)
            {
                    result.push_back(i);
                    cout<<i<<" ";
                    result.push_back(j);
                    cout<<j<<endl;
            }

        }
    }

}

