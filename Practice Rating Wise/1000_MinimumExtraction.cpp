#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long m;
    cin>>m;

    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];

    sort(v.begin(),v.end());
    int ans = v[0];
    for(int i=0;i<m-1;i++) ans=max(ans,v[i+1]-v[i]);
    cout<<ans<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
