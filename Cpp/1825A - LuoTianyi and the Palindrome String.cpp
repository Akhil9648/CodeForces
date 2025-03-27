#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int r;
    cin>>r;
    while(r--)
    {
        int flag=0;
    string a;
    cin>>a;
    int n=a.size();
    for(int i=n-1;i>=0;i--)
    {
        string sub=a.substr(0,i);
        string b=sub;
        reverse(begin(b),end(b));
        if(sub!=b)
        {
            flag=1;
            cout<<i;
            cout<<"\n";
            break;
        }
    }
    if(!flag)
    {
    cout<<"-1";
    cout<<"\n";
    }
    }
    return 0;
}
