#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int _ = 0; _ < t; ++_) {
        string s;
        cin >> s;

        vector<int> cnt(2, 0);

        for (int i = 0; i < s.length(); ++i)
            cnt[s[i] - '0']++;

        for (int i = 0; i <= s.length(); ++i) {
            int digit = s[i] - '0';
            if (i == s.length() || cnt[1 - digit] == 0) {
                cout << s.length() - i << endl;
                break;
            }
            cnt[1 - digit]--;
        }

    }

    return 0;
}
