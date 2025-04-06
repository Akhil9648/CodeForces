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
        int count=(a*b)/2;
        if((a*b)%2!=0)
        {
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
