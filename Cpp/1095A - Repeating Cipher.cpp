#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    string ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(s[i]);
        i+=c;
        c++;
    }
    cout<<ans;
}
