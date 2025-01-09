#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    for(auto &digit:a)
    {
        if(digit>'4')
        {
            digit='9'-digit+'0';
        }
    }
    if(a.front()=='0')
    {
        a.front()='9';
    }
    cout<<a;
     return 0;
}
