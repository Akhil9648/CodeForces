#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int pos=0,pos2=0,c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        for(int i=s.length();i>=pos;i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        for(int i=pos;i<pos2;i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
        }
        cout<<c<<"\n";
    }
}
