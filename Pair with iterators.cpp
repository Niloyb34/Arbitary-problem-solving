#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5,6,7};
    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6}};
    for(pair<int,int>&value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

}
