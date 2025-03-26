#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    int maxi=INT_MIN;
    int maxind=0;
    int mini=INT_MAX;
    int minind=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            maxind=i;
        }
        if(arr[i]<=mini)
        {
            mini=arr[i];
            minind=i;
        }
    }
    int count=(maxind)+(n-minind-1);
    if(maxind>minind)
    {
        count-=1;
    }
    cout<<count;
}
