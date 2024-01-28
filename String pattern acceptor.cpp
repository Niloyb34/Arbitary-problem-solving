/*Start and end e 1 hobe baki shobe zero*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter how many strings ";
    cin>>t;
    while(t--)
    {
        int i=0;
        string s;
        cin>>s;
        int cnt=0;

        if(s[i]=='1'&&s[s.size()-1]=='1')
        {
            for(i=1; i<s.size()-1; i++)
            {
                if(s[i]=='0')
                {
                    cnt++;
                }
                else if(s[i]!='0')
                {
                    cout<<"NOT accepted"<<endl;
                    break;
                }
                if(cnt==(s.size()-2))
                {
                    cout<<"Accepted"<<endl;
                    break;
                }
            }
        }
        else
        {
            cout<<"NOt accepted"<<endl;
        }
    }
}
