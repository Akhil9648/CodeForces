#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    vector<int> result(n+1);
    for(int i=1;i<=n;i++)
    {
        result[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
