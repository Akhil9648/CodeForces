#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int sum=0;
    while(1)
    {
        n*=3;
        k*=2;
        sum++;
        if(n>k)
        {
            cout<<sum;
            break;
        }
    }
    return 0;
}
