#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n<=1)return 1;///jdi aikane teke return na hoi tahole nicher line e jabe
    return fact(n-1)*n;///factorial of n will be fact(n)=fact(n-1)*n;
}
int main()
{
    long long  n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fact(n)<<endl;
    }
}
