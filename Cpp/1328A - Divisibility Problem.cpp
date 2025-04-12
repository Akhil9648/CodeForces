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
        int c=a/b;
        int d=a%b;
        if(d==0)
        {
            cout<<"0\n";
            continue;
        }
        c++;
        cout<<(c*b)-a<<"\n";
    }
    return 0;
}
