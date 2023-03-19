#include<bits/stdc++.h>
using namespace std;
void search(char *pat,char *txt)
{
    int n=strlen(txt);
    int m=strlen(pat);
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
    char *txt="AABAACAADAABAAABAA";
    char *pat="AABA";
    search(pat,txt);
}
