#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*auto keyword c++ e dynamically value nia felle mane nijer teke
    define kore nei jemon a=1 likle auto keyword dynamically a er data type
    assume kore nei
    */
    vector<pair<int,int>>v_p={{1,2},{2,3}};
    for(auto &value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto a=1.0555;//ata automatically float dore nibe a er value take
    auto b=23.562;
    cout<<a<<endl;
    cout<<b<<endl;
}
