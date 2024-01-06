#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>&nums,int key)
{
    int n=nums.size();
    int count=0;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=nums[j];
            if(sum==key)
            {
                cout<<"The elements  that we added to get "<<key<<" is : ";
                    for(int l=i; l<=j; l++)
                {
                    cout<<nums[l]<<"  ";
                }
                cout<<endl;
                count++;
            }
        }

    }
    return count;
}
int main()
{
    int e,k,n;
    vector<int>nums;
    cout<<"How many elements : ";
    cin>>n;
    cout<<"Which sum  you want to find : ";
    cin>>k;
    cout<<"Enter the vector elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>e;
        nums.push_back(e);
    }
    int count=subarraySum(nums,k);
    cout<<"Total number of subarray to get "<<k<<" is:  "<<count<<endl;
    return 0;

}
