#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a<=10)
        {
            cout << "1\n" << a << "\n";
            continue;
        }
        int num=a;
    int count=0;
    vector<int> ans;
    int pos=0;
    while(num!=0)
    {
        int d=num%10;
        if(d>0)
        {
            ans.push_back(d*(int)pow(10,pos));
            count++;
        }
        pos++;
        num/=10;
    }
        cout<<count<<"\n";
        for(int i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
