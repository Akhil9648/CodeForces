#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    if(n==0)
    {
        cout<<"0";
        return 0;
    }
    int a=(k*l)/nl;
    int b=c*d;
    int f=p/np;
    int e=min({a,b,f})/n;
    cout<<e;
    return 0;
}
