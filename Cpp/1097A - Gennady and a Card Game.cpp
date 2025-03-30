#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin>>t;
    int flag=0;
    vector<string> s;
    for(int i=0;i<5;i++)
    {
        string a;
        cin>>a;
        s.push_back(a);
    }
    for(int i=0;i<5;i++)
    {
        if(s[i][0]==t[0] || s[i][1]==t[1])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
