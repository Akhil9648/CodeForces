#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 1, mcount = 1;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] < a[i + 1]) {
            count++;
        } else {
            mcount = max(count, mcount);
            count = 1;
        }
    }
    mcount = max(count, mcount);
    cout << mcount;
    return 0;
}
