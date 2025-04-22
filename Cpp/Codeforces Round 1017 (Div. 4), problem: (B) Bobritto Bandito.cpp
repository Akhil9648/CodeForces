#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int a=min(m,(-l));
        int b=m-a;
        cout<<-a<<" "<<b<<"\n";
    }
    return 0;
}
