/*Make a system which accepts this kind of pattern of string {0,01,001,00001,000001,....} */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cout<<"Enter the number of strings : ";
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0;
        if(s=="0")
        {
            cout<<"Accepted"<<endl;
        }
        else if(s[s.size()-1]!='1')
        {
               cout<<"NOT accepted"<<endl;
        }

        else if(s[i]=='0')
        {
            for(i=1; i<s.size(); i++)
            {
                if(s[i]=='0')
                {
                    continue;
                }
               /* else if(s[s.size()-1]!='1')
                {
                       cout<<"NOT Accepted"<<endl;
                }*/
                else if(s[i]=='1'&&i==(s.size()-1))
                {
                    cout<<"Accepted"<<endl;
                    break;
                }
                else if(s[i]=='1'&&i!=(s.size()-1))
                {
                    cout<<"NOT accepted"<<endl;
                    break;
                }
                else
                {
                    cout<<"NOT accepted"<<endl;
                }
            }
        }
        else
        {
               cout<<"NOT accepted"<<endl;
        }
    }
}
