/*Find the  number of unique characters in a duplicate alphabet  contained
string  jemon abbddccffgh erokom typer  and print the largest index of their apperance*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<char,int>count;
    for(int i=0; i<s[i]!='\0'; i++)
    {
        count[s[i]]++;
    }
    cout<<"Numbers of unique characters in a given string:"<<count.size()<<endl;
    vector<int>lastindex(26,0);///int vector er size ta string er length er sman
    for(int i=0;s[i]!=0;i++)
    {
        lastindex[s[i]-'a']=i;
    }
    for(int i=0;i<lastindex.size();i++)
    {
        cout<<lastindex[i]<<" ";
    }
}
