#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(!s.empty() && s[0]>='a' && s[0]<='z')
    {
        s[0]=toupper(s[0]);
    }
    cout<<s;
    return 0;
}
