#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int d=a%10;
        d--;
        d*=10;
        int b=1;
        while(a!=0)
        {
            d+=b;
            b++;
            a/=10;
        }
        cout<<d<<"\n";
    }
    return 0;
}
