#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    n=abs(n);
    int count=0;
    while(n!=0)
    {
        int d=n%10;
        if(d==7 || d==4)
        {
            count++;
        }
        n/=10;
    }
    if(count==7 || count==4)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
