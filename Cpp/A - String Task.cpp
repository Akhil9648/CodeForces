#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string a;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')|| (s[i]=='y'))
        {
            continue;
        }
        else
        {
            a.push_back('.');
            a.push_back(s[i]);
        }
    }
    cout<<a;
    return 0;
}
