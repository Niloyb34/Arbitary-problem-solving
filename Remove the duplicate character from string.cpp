/* Remove the duplicate characters from a string that means hello---->helo*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string str,temp;
    getline(cin,str);
    for(i=0; i<str.length(); i++)
    {
        for(j=0; j<str.size(); j++)
        {
            if(str[i]==str[j])
            {
                break;
            }
        }
        if(i==j)
        {
            temp+=str[i];
        }
    }
    cout<<"After removing temporary variable: "<<temp<<endl;
}

