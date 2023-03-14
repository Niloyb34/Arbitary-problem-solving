#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5,6,7};

    ////print using range based loop
    for(int &value:v)//reference patanor jnno & use hoi
        ///aikane v vector er mangula value er vitore dukte thakbe
    {
        ///aikane reference use korci tie value++ korle increment hoi jabe
        ///reference pass korle actual value te increment hbe

       value++;
    }
    for(int value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}
