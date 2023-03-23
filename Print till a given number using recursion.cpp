/*Print 1-10 using recursion c++ programme*/
#include<bits/stdc++.h>
using namespace std;
void r(int n) //5   4   3    2    1
{
    if(n>0)
    {
        r(n-1);//4 3 2 1 0
        cout<<n<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    r(n);
}
