#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,5,6,7};

    ////print using range based loop
    for(int value:v)
        ///aikane v vector er mangula value er vitore dukte thakbe
    {
        /*aikane asole real v er value gular copy chole ase
         but se mangula hbubu ase na aijnno value++ korleo real
         value te kono increment ase na o print korle akoi thake
         */
       value++;
    }
    for(int value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}
