#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n;
        int odd=0;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                odd++;
            }
        }
        if(odd==0 || (n%2==0 && odd==n))
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
