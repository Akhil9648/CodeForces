#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int> ans(9,0);
    for(int i=0;i<n;i++)
    {
        ans[s[i]-'0']++;
    }
    string a;
    for(int i=0;i<9;i++)
    {
        while(ans[i]!=0)
        {
            a.push_back(i+'0');
            a.push_back('+');
            ans[i]--;
        }
    }
    a.erase(n);
    cout<<a;
    return 0;
}
