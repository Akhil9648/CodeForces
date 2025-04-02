#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int c=2;
        int s=1;
        while(c<a){
            c+=b;
            s++;
        }
        cout<<s<<"\n";
    }
    return 0;
}
