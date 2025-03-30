#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(1)
    {
        int a=i*(i+1)/2;
        if(sum+a>n)
        {
            break;
        }
        sum+=a;
        i++;
    }
    cout<<--i;
    return 0;
}
