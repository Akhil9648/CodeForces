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
        int count=0;
        int c=abs(a-b);
        if(c%10>0)
        {
            count++;
        }
        count+=c/10;
        cout<<count<<"\n";
    }
    return 0;
}
