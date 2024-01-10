#include<bits/stdc++.h>
using namespace std;
int main()
{
    int even=0,odd=0,diff;
    int n;
    cout<<"ENter size : ";
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(i&1)//if er vitore 1 asle true tie tkon even execute hbe
        {

            cout<<"Even execute hoice -->"<<endl;
            even += v[i];
            cout<<"EVEN SUM IS  :"<<even<<endl;
            cout<<"ODD sum is : "<<odd<<endl;
        }
        else//if er vitore 0 asle false tie tkon odd execute hbe
        {
            cout<<"Odd execute hoice --->"<<endl;
            odd += v[i];
            cout<<"EVEN SUM IS :"<<even<<endl;
            cout<<"ODD SUM IS   :"<<odd<<endl;

        }
        diff = odd - even;
        cout<<"Difference is   : "<<diff<<endl;
    }

}
/* INPUT SIZE :
ENter size : 8
1 2 11 4 1 5 1 2



OUTPUT :
Odd execute hoice --->
EVEN SUM IS :0
ODD SUM IS   :1
Difference is   : 1
Even execute hoice -->
EVEN SUM IS  :2
ODD sum is : 1
Difference is   : -1
Odd execute hoice --->
EVEN SUM IS :2
ODD SUM IS   :12
Difference is   : 10
Even execute hoice -->
EVEN SUM IS  :6
ODD sum is : 12
Difference is   : 6
Odd execute hoice --->
EVEN SUM IS :6
ODD SUM IS   :13
Difference is   : 7
Even execute hoice -->
EVEN SUM IS  :11
ODD sum is : 13
Difference is   : 2
Odd execute hoice --->
EVEN SUM IS :11
ODD SUM IS   :14
Difference is   : 3
Even execute hoice -->
EVEN SUM IS  :13
ODD sum is : 14
Difference is   : 1

Process returned 0 (0x0)   execution time : 125.908 s
Press any key to continue.
  */
