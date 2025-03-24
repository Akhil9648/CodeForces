#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> arr(3,0);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(begin(arr),end(arr));
    cout<<(arr[2]-arr[1])+(arr[1]-arr[0]);
    return 0;
}
