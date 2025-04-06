#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b+c+d)%3!=0 || (a+b+c+d)/3<a || (a+b+c+d)/3<b || (a+b+c+d)/3<c)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
