#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,w;
    cin>>n>>k>>w;
    int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum+=(i*n);
    }
    if(sum<=k)
    {
        cout<<"0";
    }
    else
    {
    cout<<sum-k;
    }
    return 0;
}
