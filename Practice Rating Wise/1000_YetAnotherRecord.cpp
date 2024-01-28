#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin >> s;

    int n = s.length();
    vector<int> upper, lower;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'b') {
            s[i] = ' ';
            if(!lower.empty()) {
                s[lower.back()] = ' ';
                lower.pop_back();
            }
            continue;
        }
        if (s[i] == 'B') {
            s[i] = ' ';
            if (!upper.empty()) {
                s[upper.back()] = ' ';
                upper.pop_back();
            }
            continue;
        }
        if ('a' <= s[i] && s[i] <= 'z') {
            lower.push_back(i);
        } else {
            upper.push_back(i);
        }
    }

    string ans;
    for(auto it:s) if(it!=' ') ans.push_back(it);
    cout<<ans<<endl;
 
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}