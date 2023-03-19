#include<bits/stdc++.h>
using namespace std;
void search(string pat,string txt)
{
    int n=txt.size();
    int m=pat.size();
    int i,j;
    for(i=0; i<=n-m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(txt[i+j]!=pat[j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;
    search(pat,txt);
}
