#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "ababcadseba";
    int i;
    char ch;
    int count[26] = {0}; // Initialize count array with zeros
    int cnt[26]={0};

    for (int i = 0; i < s.size(); i++)
    {
        ch = s[i];
        count[ch - 'a']++;
    }
    for(i=0; i<s.size(); i++)
    {

        ch=s[i];
        if(count[ch-'a']!=0)
        {
            cout<<" Frequency of "<<ch<<" is "<<count[ch-'a']<<endl;
            cnt[i]=count[ch-'a'];
            count[ch-'a']=0;
        }
    }


        // Find the maximum frequency
        int maxFrequency = 0;
        for (int i = 0; i <26 ; i++)
        {
            if (cnt[i] > maxFrequency)
            {

                maxFrequency = cnt[i];/// maximum frequency number ta kto mane je character ta maximum ase se maximum number ta kto.
            }
        }
        // Count the frequency of the maximum number
        int frequencyOfMax = 0;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] == maxFrequency)
            {
                frequencyOfMax++;
            }
        }
        cout << "Maximum frequency: " << maxFrequency << endl;
        cout << "Frequency of the maximum number: " << frequencyOfMax << endl;///mane maximum frequency wala koita unique digit ase
        return 0;
}
