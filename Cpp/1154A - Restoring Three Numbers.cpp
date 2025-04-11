#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(4);
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2];
    return 0;
}
