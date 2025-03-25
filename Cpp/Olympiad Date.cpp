#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        vector<int> dig(s);
        for (int i = 0; i < s; i++) {
            cin >> dig[i];
        }

        unordered_map<int, int> mp;
        bool found = false;

        for (int i = 0; i < s; i++) {
            mp[dig[i]]++;
            if (mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[3] >= 1 && mp[5] >= 1) {
                cout << (i + 1) << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "0\n";
        }
    }
    return 0;
}
