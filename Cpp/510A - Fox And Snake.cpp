#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int j;
        if(i%2==0)
        {
            for(j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<"\n";
        }
        else
        {
        if((i/2)%2==0)
        {
            for(j=0;j<m-1;j++)
            {
                cout<<".";
            }
            cout<<"#";
            cout<<"\n";
        }
        else
        {
            cout<<"#";
            for(j=0;j<m-1;j++)
            {
                cout<<".";
            }
            cout<<"\n";
        }
        }
    }
    return 0;
}
