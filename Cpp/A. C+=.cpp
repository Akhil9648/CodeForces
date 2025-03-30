#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int count=0;
        int a,b,n;
        cin>>a>>b>>n;
        while(a<=n && b<=n )
        {
        if(a>b)
        {
            b+=a;
        }
        else
        {
                a+=b;
        }
        count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
