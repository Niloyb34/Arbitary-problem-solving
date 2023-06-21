#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "ababcadsebba";
    int i;
    char ch;
    int count[26] = {0}; // Initialize count array with zeros

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
            count[ch-'a']=0;
        }
    }

    /*
        // Find the maximum frequency
        int maxFrequency = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > maxFrequency)
            {
                maxFrequency = count[i];
            }
        }

        // Count the frequency of the maximum number
        int frequencyOfMax = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] == maxFrequency)
            {
                frequencyOfMax++;
            }
        }

        cout << "Maximum frequency: " << maxFrequency << endl;
        cout << "Frequency of the maximum number: " << frequencyOfMax << endl;

        return 0;*/
}
