#include<bits/stdc++.h>
using namespace std;
int main()
{
       string s;
       cout<<"Enter the string : ";
       getline(cin,s);/// Here input can be like this- nn nilos shui bdab
       char ch;
       int cnt[26]={0},i;
       int count[26]={0};
       for(i=0;i<s.size();i++)
       {
          ch=s[i];
          count[ch-'a']++;
       }
       for(i=0;i<s.size();i++)
       {
              ch=s[i];
              if(count[ch-'a']!=0)
              {
                     cout<<" Frequency of "<<ch<<" is "<< count[ch-'a']<<endl;
                     count[ch-'a']=0;
              }
       }

}
