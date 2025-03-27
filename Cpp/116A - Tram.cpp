#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    int maxi=0;
    while(n--)
    {
        vector<int>a(2,0);
        for(int i=0;i<2;i++)
        {
            cin>>a[i];
        }
        maxi-=a[0];
        maxi+=a[1];
        count=max(maxi,count);
    }
    cout<<count;
    return 0;
}
