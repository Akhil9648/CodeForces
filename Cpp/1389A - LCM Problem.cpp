#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(b<2*a)
        {
            cout<<"-1 -1\n";
        }
        else
        {
            cout<<a<<" "<<2*a<<"\n";
        }
    }
    return 0;
}
