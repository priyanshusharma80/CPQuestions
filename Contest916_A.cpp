#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    unordered_map<char,int> u;
    for(auto it:s) u[it]++;

    vector<int> c(27,0);
    int ans=0;
    for(auto it:u) if(it.first-'A'+1<=it.second) ans++;
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
