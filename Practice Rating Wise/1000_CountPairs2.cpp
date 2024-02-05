#include <bits/stdc++.h>
using namespace std;

const int N=26;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int>big(N, 0), small(N, 0);
    for(auto &i : s){
        if('A' <= i && 'Z' >= i) big[i - 'A']++;
        else small[i - 'a']++;
    }
    int answer = 0;
    for(int i = 0; i < N; i++){
        int pairs = min(small[i], big[i]);
        answer += pairs;
        small[i] -=pairs; big[i] -= pairs;
        int add = min(k, max(small[i], big[i]) / 2);
        k -= add; answer += add;
    }
    cout << answer << endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
