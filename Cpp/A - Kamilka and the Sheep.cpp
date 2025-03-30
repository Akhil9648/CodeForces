#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        vector<int> arr(k,0);
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        sort(begin(arr),end(arr));
        int ans=arr[k-1]-arr[0];
        cout<<ans<<"\n";
    }
    return 0;
}
