#include<bits/stdc++.h>
using namespace std;
int main()
{
       string s;
       cout<<"Enter the string : ";
       getline(cin,s);
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
                     cnt[i]=count[ch-'a'];
                     cout<<" Frequency of "<<ch<<" is "<< count[ch-'a']<<endl;
                     count[ch-'a']=0;
              }
       }
  /////////////////////////////////////// FIND OUT THE MAXIMUM FREQUENCY //////////////////////////////
 ///////////////////////////////////////  Mane maximum frequency number ta kto seta bahir krbo///////
       int maxfreq=0;
/*array er ketre every integer 4 bytes jiega nei mane every number 4 bytes jiega consume kore   */
       int si=sizeof(s)/sizeof(int);
       for(i=0;i<si;i++)
       {
           if(cnt[i]>maxfreq)
           {
                  maxfreq=cnt[i]; 
           }
       }
       ///////Count the frequency of maximum number
       int frequencyofmaxnumber=0;
       for(i=0;i<si;i++)
       {
              if(cnt[i]==maxfreq)
              {
                     frequencyofmaxnumber++;////mane arokom maximum frequency wala koita unique digit ase 
              }
       }
       cout<<"Maximum frequency : "<<maxfreq<<endl;///////Maximum frequency ta kto seta find korbo
       cout<<"Frequency of that maximum number : "<<frequencyofmaxnumber<<endl;
       return 0;
}
